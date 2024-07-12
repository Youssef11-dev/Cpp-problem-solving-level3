#include <iostream>
#include <string>
using namespace std;

char  ReadChar() {
    char Ch1;
    cout <<"\nPlease Enter a Character?\n";
    cin >> Ch1; return Ch1;
}

bool isVowel(char ch) {
    char c = tolower(ch);
    return c == 'a'|| c == 'e' || c == 'i' || c =='o' || c == 'u';
}

int main() {
    char charcter = ReadChar();
    if(isVowel(charcter)) {
        cout << "yes letter "<< charcter<<" is vowel\n";
    }else {
        cout << "no letter "<< charcter<<" isn't vowel\n";
    }

    return 0;
}