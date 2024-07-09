#include <iostream>
using namespace std;
int randomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void random3x3Array(int matrixArray [3][3],int rows,int cols) {
    for(int i = 0;i < rows; i++) {
        for(int j = 0 ; j < cols ; j++) {
            matrixArray[i][j]=randomNumber(1,10);
        }
    }
}
void printMatrix(int matrixArray [3][3],int rows,int cols) {
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            printf("%2d ",matrixArray[i][j]);
        }
        cout << endl;
        
    }
}
void multiplyTwoMatrix(int matrix1[3][3],int matrix2[3][3],int matrix3[3][3],int rows,int cols) {

    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}

int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    random3x3Array(matrix1,3,3);
    random3x3Array(matrix2,3,3);
    cout << "Matrix 1 : "<<endl;
    printMatrix(matrix1,3,3);
    cout << "\n\nMatrix 2 : "<<endl;
    printMatrix(matrix2,3,3);
    cout << "\n\n result : "<<endl;
    multiplyTwoMatrix(matrix1,matrix2,matrix3,3,3);
    printMatrix(matrix3,3,3);

    return 0;
}