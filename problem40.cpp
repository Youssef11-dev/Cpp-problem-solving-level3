#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Join(vector<string> S,string sep) {
    string String = "";
    for(string &word : S) {
        String = String + word + sep;
    }
    return String.substr(0,String.length()-sep.length());
}
string Join(string S[3],string sep,int strLength) {
    string String;
    for(int i = 0 ; i < strLength;i++) {
        String = String + S[i] + sep;
    }
    return String.substr(0,String.length()-sep.length());
}

int main() {
    vector<string> Vnames = {"mohamed", "ali", "khalid"};
    string arrayOfStrings[3] = {"mohamed","ali","xd"};
    cout << "Vector"<<endl;
    cout <<Join(Vnames,"-")<<endl;
    cout << "arr"<<endl;
    cout <<Join(arrayOfStrings,"-----",3);
    return 0;
}