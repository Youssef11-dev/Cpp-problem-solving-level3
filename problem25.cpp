#include <iostream>
#include <string>
#include <string.h>
using namespace std;



string printFirstLInString(string s1) {
    bool firstLetter = true;

    for(int i = 0 ; i < s1.length();i++) {
        if(firstLetter) {
            s1.at(i) = tolower(s1.at(i));
        }
        firstLetter = s1[i] == ' '? true:false;
    }
    return s1;

}

int main() {

    cout <<printFirstLInString("youssef nabil saad");


    return 0;
}