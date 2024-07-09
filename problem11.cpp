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
int sumOfMatrix(int matrix[3][3],int rows,int cols) {
    int sum = 0;
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}
bool areMatricesEqual(int mat1[3][3],int mat2[3][3],int rows,int cols) {
    return (sumOfMatrix(mat1,rows,cols) == sumOfMatrix(mat2,rows,cols));
}
int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    int matrix2[3][3];
    cout << "\n\nMatrix 1 : \n\n";
    random3x3Array(matrix1,3,3);
    printMatrix(matrix1,3,3);
    cout << "\n\nMatrix 2 : \n\n";
    random3x3Array(matrix2,3,3);
    printMatrix(matrix2,3,3);
    string message = areMatricesEqual(matrix1,matrix2,3,3)? "Yes two are equal": "No they are not equal";
    cout << message;


    return 0;
}