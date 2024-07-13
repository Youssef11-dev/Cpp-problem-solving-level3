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


string replaceWordsInString(string S1,string stToReplace,string replaceTo) {
    short pos = S1.find(stToReplace);
    while(pos != string::npos) {
        S1 = S1.replace(pos,stToReplace.length(),replaceTo);
        pos = S1.find(stToReplace);
    }
    return S1;
}
int main() {
    cout <<replaceWordsInString("I love egypt and iam from egypt","egypt","usa");
    return 0;
}