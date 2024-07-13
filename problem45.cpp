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

int main() {
    stClientData data1;
    data1 = readData();
    cout << convertRecordToline(data1,"#/");
    return 0;
}