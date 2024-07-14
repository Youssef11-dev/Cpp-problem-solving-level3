#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
struct stClientData {
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    int balance;
};

string convertRecordToline(stClientData data,string sep) {
    string String = "";
    String += data.accountNumber + sep;
    String += data.pinCode + sep;
    String += data.name + sep;
    String += data.phone + sep;
    String += to_string(data.balance);
    return String;
}
void saveStringDataToFile(string fileName,string String) {
    fstream File;
    File.open(fileName,ios::out|ios::app);
    if(File.is_open()) {
        File<<String;
        File<<endl;
        File.close();
    }
}

stClientData ReaddNewClient() {
    stClientData data;
    cout << "Account number : ";
    getline(cin>>ws,data.accountNumber);

    cout << "Pin code : ";
    getline(cin,data.pinCode);

    cout<< "Name : ";
    getline(cin,data.name);

    cout << "phone : ";
    getline(cin,data.phone);

    cout << "balance: ";
    cin>> data.balance;
    return data;
}
void addNewClient() {
    stClientData client;
    client = ReaddNewClient();
    saveStringDataToFile("ClientsData.txt",convertRecordToline(client,"#//#"));
}
void addClients() {
    char ask = 'y';
    do {
        cout << "Adding new Client\n\n";
        addNewClient();
        cout << "Client added successfuly , do you want to add more Y/N? ";
        cin >> ask;
    }while(tolower(ask) == 'y');
}

vector<string> SplitFunction(string S1,string seprator) {
    vector<string> words;
    int pos;
    string word ;
    while ((pos = S1.find(seprator)) != string::npos) {
        word = S1.substr(0,pos);
        words.push_back(word);
        S1.erase(0,pos+seprator.length());
        pos = 0;
    }
    words.push_back(S1);
    return words;
}

stClientData convertLineToRecord(string String,string sep) {
    stClientData data;
    vector<string> temp;
    temp =SplitFunction(String,sep);
    data.accountNumber = temp[0];
    data.pinCode = temp[1];
    data.name = temp[2];
    data.phone = temp[3];
    data.balance = stoi(temp[4]);
    return data;

}

int main() {
    addClients();

    return 0;
}