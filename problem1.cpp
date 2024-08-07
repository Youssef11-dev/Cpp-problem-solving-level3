#include<iostream>
using namespace std;
int randomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void random3x3Array(int matrixArray [3][3],int rows,int cols) {
    for(int i = 0;i < rows; i++) {
        for(int j = 0 ; j < cols ; j++) {
            matrixArray[i][j]=randomNumber(1,100);
        }
    }
}
void print3x3Array(int matrixArray[3][3],int rows,int cols) {
    for(int i = 0;i < rows; i++) {
        for(int j = 0 ; j < cols ; j++) {
            cout << matrixArray[i][j]<<" ";
        }
        cout << endl;
    }
}


int main() {
    srand((unsigned) time(NULL));
    int matrixArray [3][3];
    random3x3Array(matrixArray,3,3);
    print3x3Array(matrixArray,3,3);
    return 0;
}