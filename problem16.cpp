#include <iostream>
using namespace std;
float ReadNumber(string msg)
{
    float Number = 0;

    cout << msg;
    cin >> Number;

    return Number;
}
int randomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void random3x3Array(int matrixArray [3][3],int rows,int cols) {
    for(int i = 0;i < rows; i++) {
        for(int j = 0 ; j < cols ; j++) {
            matrixArray[i][j]=randomNumber(0,10);
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
int howManyNumberCountsInMatrix(int matrix[3][3],int rows,int cols,int number) {
    int counter = 0;
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            if(matrix[i][j]==number) {
                counter++;
            }
        }
    }
    return counter;
}
bool isSparceMatrix(int matrix[3][3],int rows,int cols) {
    short MatrixSize = cols *rows;
    return howManyNumberCountsInMatrix(matrix,3,3,0) >= (MatrixSize/2);
}


int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    cout << "\n\nMatrix 1 : \n\n";
    random3x3Array(matrix1,3,3);
    printMatrix(matrix1,3,3);
    string message = isSparceMatrix(matrix1,3,3)? "Yes, it's sparce matrix":"No, Not sparce";
    cout << message<<endl;
    return 0;
}