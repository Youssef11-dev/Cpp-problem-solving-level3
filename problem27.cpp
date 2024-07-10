#include <iostream>
#include <string>
#include <string.h>
using namespace std;

char invertCharCase(char c) {
    return isupper(c)? tolower(c): toupper(c);

}



int main() {
    cout <<invertCharCase('a');



    return 0;
}