#include <iostream>
#include <string>
#include <vector>
using namespace std;

string  ReadString() {
    string S1;
    cout <<"\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}
string trimLeft(string S1) {

    for(int i = 0 ; i <S1.length();i++) {
        if(S1[i]!=' ') {
            return S1.substr(i,S1.length()-1);
        }
    }

}
string trimRight(string S1) {
    for(int i = S1.length()-1 ; i > 0 ; i--) {
        if(S1[i]!=' ') {
            return S1.substr(0,i+1);
        }
    }
}
string trim(string S1) {
    S1 =trimLeft(S1);
    return trimRight(S1);
}


int main() {

    cout <<trimLeft("       youssef     ")<<endl;
    cout << trimRight("       youssef     ")<<endl;
    cout <<trim("       youssef     ");
    return 0;
}