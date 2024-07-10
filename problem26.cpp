#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string changeAllStringToUpper(string s1) {
    for(int i = 0 ; i < s1.length();i++) {
        if(s1[i] != ' ') {
            s1[i]=toupper(s1[i]);
        }
    }
    return s1;
}
string changeAllStringToLower(string s1) {
    for(int i = 0 ; i < s1.length();i++) {
        if(s1[i] != ' ') {
            s1[i]=tolower(s1[i]);
        }
    }
    return s1;
}


int main() {
    cout << changeAllStringToUpper("Youssef nabil saad")<<endl;
    cout << changeAllStringToLower("Youssef nabil saad")<<endl;



    return 0;
}