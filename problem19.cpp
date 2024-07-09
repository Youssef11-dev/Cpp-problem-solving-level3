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
int minNumberInMatrix(int matrix[3][3],int rows,int cols) {
    int number = matrix[0][0];
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            if(matrix[i][j] < number) {
                number = matrix[i][j];
            }
        }
    }
    return number;
}
int maxNumberInMatrix(int matrix[3][3],int rows,int cols) {
    int number = matrix[0][0];
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            if(matrix[i][j] > number) {
                number = matrix[i][j];
            }
        }
    }
    return number;
}


int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    cout << "\n\nMatrix 1 : \n\n";
    random3x3Array(matrix1,3,3);
    printMatrix(matrix1,3,3);
    cout << "Min number in matrix is : "<<minNumberInMatrix(matrix1,3,3)<<"\nMax Number in matrix is : "<< maxNumberInMatrix(matrix1,3,3);



    return 0;
}