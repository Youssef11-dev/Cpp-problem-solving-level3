#include <iostream>
#include <string>
using namespace std;
enum enWhatToCount{CapitalLetters = 0,SmallLetters = 1,All=3};
int countCapitalLetter(string S1) {
    int counter = 0;
for(int i = 0 ; i< S1.length();i++) {
    if(isupper(S1[i])) {
        counter++;
    }
}
    return counter;
}
int countSmalllLetter(string S1) {
    int counter = 0;
    for(int i = 0 ; i< S1.length();i++) {
        if(islower(S1[i])) {
            counter++;
        }
    }
    return counter;
}
int countLetters(string S1,enWhatToCount whatToCount=enWhatToCount::All) {
    if(whatToCount == enWhatToCount::All) {
        return S1.length();
    }
    int counter = 0;
    for(int i = 0 ; i< S1.length();i++) {
        if(whatToCount ==::CapitalLetters&&isupper(S1[i])) {
            counter++;
        }
        if(whatToCount == enWhatToCount::SmallLetters&&islower(S1[i])) {
            counter++;
        }
    }
    return counter;
}

int main() {
    string name = "youssef nabil SAAD";
    cout << name << endl;
    cout << "string length = "<< name.length()<<endl;
    cout << "string capital = "<< countCapitalLetter(name)<<endl;
    cout << "string small = "<< countSmalllLetter(name)<<endl;
    cout << countLetters(name)<<endl<<countLetters(name,enWhatToCount::CapitalLetters);




    return 0;
}