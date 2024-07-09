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
bool checkDiag(int mat[3][3],int rowNumb,int colNumb) {
    if(mat[rowNumb][colNumb] != 1) {
        return false;
    }
    return true;
}
bool checkNumbers(int mat[3][3],int rowNumb,int colNumb) {
    if(mat[rowNumb][colNumb] != 0) {
        return false;
    }
    return true;
}


bool checkScalar(int mat[3][3],int rows,int cols) {
    int firstElement = mat[0][0];
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            if(i == j && mat[i][j]!=firstElement) {
                return false;
            }
            if(i != j && mat[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3] = {{3,0,0},{0,3,0},{0,0,3}};
    cout << "\n\nMatrix 1 : \n\n";

    printMatrix(matrix1,3,3);
    string mess = checkScalar(matrix1,3,3) ? "yes its Scalar" : "no not Scalar";
    cout << mess;

    return 0;
}