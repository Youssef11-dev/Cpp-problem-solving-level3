#include <iostream>
using namespace std;

void printFibonacciSeriesOfRes(int numb,int prev1,int prev2) {
    int febNumber = 0;
    if(numb > 0) {
        febNumber = prev1 + prev2;
        cout << " "<<febNumber<< " ";
        prev2 = prev1;
        prev1 = febNumber;
        printFibonacciSeriesOfRes(numb-1,prev1,prev2);
    }
}


int main() {
    printFibonacciSeriesOfRes(15,0,1);
    return 0;
}