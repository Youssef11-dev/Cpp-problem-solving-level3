#include <iostream>
using namespace std;


void printFibonacciSeriesOfLoop(int numb) {
    int prev1 =1,prev2 =1;
    int temp=0;
    cout << prev2<<" ";
    for(int i = 1;i < numb ; i++) {
        cout << prev1 << " ";
        temp = prev1 + prev2;
        prev2 = prev1;
        prev1 = temp;
    }


}
int main() {
    printFibonacciSeriesOfLoop(15);

    return 0;
}