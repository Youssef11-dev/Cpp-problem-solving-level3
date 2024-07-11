#include <iostream>
#include <string>
using namespace std;

int letterCount(string S1,char letter) {
    int counter = 0;
    for(int i = 0;i < S1.length();i++) {
        if(letter == S1[i]) {
            counter++;
        }
    }
    return counter;
}


int main() {
    string name = "Youssef Nabil";
    cout <<letterCount(name,'l');


    return 0;
}