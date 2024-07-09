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


bool checkIdent(int mat[3][3],int rows,int cols) {
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
           if(i==j && mat[i][j] != 1) {
               return false;
           }else if(i != j && mat[i][j] != 0) {
               return false;
           }
        }

    }
    return true;
}

int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
    cout << "\n\nMatrix 1 : \n\n";

    printMatrix(matrix1,3,3);
    string mess = checkIdent(matrix1,3,3) ? "yes its ident" : "no not ident";
    cout << mess;

    return 0;
}