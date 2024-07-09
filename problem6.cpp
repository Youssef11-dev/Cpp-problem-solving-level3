#include <iostream>
using namespace std;

void fillMatrixWithOrderdNumber(int arr[3][3],int rows,int cols) {
    static int order = 0;
    for(int i = 0 ; i < rows;i++) {
        for(int j = 0 ; j < cols;j++) {
            order++;
            arr[i][j] = order;
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
void swapArrays(int swapped[3][3],int swap[3][3]) {
    for(int i = 0 ; i < 3;i++) {
        for(int j = 0 ; j < 3 ; j++) {
            swapped[i][j]=swap[i][j];
        }
    }
}
void transposeOfMatrix(int matrixArray[3][3],int rows,int cols) {
    int newArr[3][3];
    for(int i = 0;i < cols; i++) {
        for(int j = 0 ; j <rows;j++) {
            newArr[j][i] = matrixArray[i][j];
        }
    }
    swapArrays(matrixArray,newArr);
}

int main() {
    int matrixArray[3][3];
    fillMatrixWithOrderdNumber(matrixArray,3,3);
    print3x3Array(matrixArray,3,3);
    transposeOfMatrix(matrixArray,3,3);
    cout << "\n=================\n";
    print3x3Array(matrixArray,3,3);
}