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
int rowSum(int arr[3][3],short rowNumber,short cols) {
    int sum = 0;
    for(short j=0;j < cols;j++) {
        sum += arr[rowNumber][j];
    }
    return sum;
}
void printSumOfEachRow(int arr[3][3],short rows,short cols,int arr1[100]) {
    for(int i = 0;i < rows;i++) {
        arr1[i] = rowSum(arr,i,cols);
    }
}
void printArray(int L,int arr[100]) {
    for(int i = 0 ; i <L;i++) {
        cout << "sum of col = "<<arr[i]<<endl;
    }
}

int main() {
    srand((unsigned) time(NULL));
    int matrixArray [3][3];
    int arr[100];
    random3x3Array(matrixArray,3,3);
    print3x3Array(matrixArray,3,3);
    printSumOfEachRow(matrixArray,3,3,arr);
    printArray(3,arr);
    return 0;
}