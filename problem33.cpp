#include <iostream>
#include <string>
using namespace std;


bool isVowel(char ch) {
    char c = tolower(ch);
    return c == 'a'|| c == 'e' || c == 'i' || c =='o' || c == 'u';
}
int countVowel(string S1) {
    int counter = 0;
    for(int i = 0;i<S1.length();i++) {
        if(isVowel(S1[i])) {
            counter++;
        }
    }
    return counter;
}

string  ReadString() {
    string S1;
    cout <<"\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

int main() {
    string S1 = ReadString();
    cout << "Number of vowels is : "<<countVowel(S1);

    return 0;
}