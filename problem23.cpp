#include <iostream>
using namespace std;

void printFirstLettersInString(string String) {

    cout << String.at(0)<<endl;
    short index = String.find(' ');
    string newStrint = String.substr(index+1);
    if(newStrint.find(' ') != newStrint.npos) {
        printFirstLettersInString(newStrint);
    }
}

void printFirstLInString(string s1) {
    bool firstLetter = true;
    for(int i = 0 ; i < s1.length();i++) {
        if(firstLetter) {
            cout << s1.at(i)<<endl;

        }
        firstLetter = s1.at(i) == ' '? true:false;
    }

}

int main() {
    /*
    string msg ;
    cout << "please Enter your string";
    cin >> msg;
    */

    printFirstLInString("ahmed ali beh abdallah sisi");

    return 0;
}