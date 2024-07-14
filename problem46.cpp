#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct stClientData {
    string accountNumber;
    string pinCode;
    string name;
    string phone;
    int balance;
};

string Join(vector<string> S,string sep) {
    string String = "";
    for(string &word : S) {
        String = String + word + sep;
    }
    return String.substr(0,String.length()-sep.length());
}

stClientData readData() {
    stClientData data;
    cout << "Account number : ";
    getline(cin,data.accountNumber);

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
string convertRecordToline(stClientData data,string sep) {
    string String = "";
    String += data.accountNumber + sep;
    String += data.pinCode + sep;
    String += data.name + sep;
    String += data.phone + sep;
    String += to_string(data.balance);
    return String;
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
    stClientData data1,data2;
    data2 =convertLineToRecord("A150#/0101#/youssef nabil saad#/0128#/2147483647","#/");
    cout << data2.name;
    cout << data2.balance;
    return 0;
}