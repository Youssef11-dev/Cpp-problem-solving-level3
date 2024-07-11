#include <iostream>
#include <string>
using namespace std;

int letterCount(string S1,char letter,bool matchCase = true) {
    int counter = 0;
    for(int i = 0;i < S1.length();i++) {
        if(matchCase) {
            if(letter == S1[i]) {
                counter++;
            }
        }
        else {
            if(tolower(letter)==tolower(S1[i])) {
                counter++;
            }
        }

    }
    return counter;
}


int main() {
    string name = "xxxXXXx";
    cout <<letterCount(name,'x',false)<<endl;


    return 0;
}