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


vector<string> SplitFunction(string S1,char seprator) {
    vector<string> words;
    int pos;
    string word ;
    while ((pos = S1.find(seprator)) != string::npos) {
        word = S1.substr(0,pos);
        words.push_back(word);
        S1.erase(0,pos+1);
        pos = 0;
    }
    words.push_back(S1);
    return words;
}
string reverseStringWords(string S1) {
    string reverseWord;
    vector<string> test;
    test = SplitFunction(S1,' ');
    for(int i = test.size() -1; i >= 0;i--) {
        reverseWord += test.at(i) + " ";
    }
    return reverseWord.substr(0,reverseWord.length()-1);
}

int main() {
    cout << reverseStringWords("youssef nabil saad");
    return 0;
}