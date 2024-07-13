#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Join(vector<string> S,string sep) {
    string String = "";
    for(string &word : S) {
        String = String + word + sep;
    }
    return String.substr(0,String.length()-sep.length());

}


int main() {
    vector<string> Vnames = {"mohamed", "ali", "khalid"};
    cout <<Join(Vnames,"-");

    return 0;
}