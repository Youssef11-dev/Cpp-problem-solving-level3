#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string invertStringCase(string S1) {
    for(int i = 0;i <S1.length();i++) {
        S1[i] = isupper(S1[i])? tolower(S1[i]):toupper(S1[i]);
    }
    return S1;
}


int main() {
    cout <<invertStringCase("youssef Nabil SAAD");



    return 0;
}