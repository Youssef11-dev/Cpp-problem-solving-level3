#include <iostream>
#include <string>
#include <vector>
using namespace std;

string removePunctuations(string S1) {
    string newString;
    for(int i =0;i < S1.length();i++) {
        if(std::ispunct(S1[i])) {
            continue;
        }else {
            newString += S1[i];
        }
    }
    return newString;
}

int main() {
    cout << "I'm youssef; it's amazing."<<endl;
    cout <<removePunctuations("I'm youssef; it's amazing.");

    return 0;
}