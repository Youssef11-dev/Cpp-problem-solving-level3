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
void printMiddleRow(int arr2d[3][3],int rows,int cols) {
    printf("middle row of matrix is : \n ");
    short middleRow = rows/2;
        for(int j = 0 ; j < cols ; j++) {
            cout << arr2d[middleRow][j]<< " ";
        }

    cout << endl;
}
void printMiddlecol(int arr2d[3][3],int rows,int cols) {
    printf("middle col of matrix is : \n ");
    short middleCol = cols/2;
    for(int i = 0 ; i < rows ; i++) {
        cout << arr2d[i][middleCol]<< " ";
    }
    cout << endl;
}
int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    cout << "\n\nMatrix 1 : \n\n";
    random3x3Array(matrix1,3,3);
    printMatrix(matrix1,3,3);
    printMiddlecol(matrix1,3,3);
    printMiddleRow(matrix1,3,3);


    return 0;
}