#include <iostream>
#include <string>
using namespace std;

string  ReadString() {
    string S1;
    cout <<"\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

void printStringWords(string S1) {
    string StringTest= "";
    for(int i = 0 ; i < S1.length() ; i++) {
        StringTest += S1[i];
        if(S1[i] == ' ') {
            cout << StringTest<<endl;
            StringTest = "";
        }
    }
    cout << StringTest;
}
void printStringWords2(string S1) {
    string Sword = "";
    string delm = " ";
    short pos;
    while((pos = S1.find(' ')) != string::npos) {
        Sword = S1.substr(0,pos);
        if(Sword != " ") {
            cout << Sword<<endl;
        }
        S1.erase(0,pos + delm.length());
        pos = 0;
    }
    if(S1 != " ") {
        cout <<S1;
    }

}



int main() {
    string S1 = ReadString();
    printStringWords2(S1);

    return 0;
}