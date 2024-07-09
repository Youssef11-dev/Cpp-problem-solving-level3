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
bool isPalindromeMatrix(int matrix[3][3],int rows,int cols) {
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols/2 ; j++) {
            if(matrix[i][j] != matrix[i][cols-1-j]) {
                return false;
            }
        }
    }
    return true;

}


int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3]= {{1,2,1},{2,1,2},{3,1,3}};
    cout << "\n\nMatrix 1 : \n\n";
    //print
    printMatrix(matrix1,3,3);
    string message =isPalindromeMatrix(matrix1,3,3)? "yes it is  ":"no its not";
    cout << message;



    return 0;
}