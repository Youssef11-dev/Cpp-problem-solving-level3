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

int main() {
    string S1 = ReadString();
    printStringWords(S1);

    return 0;
}