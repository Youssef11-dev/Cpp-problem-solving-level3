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
bool isNumberXFoundInMatrix(int matrix[3][3],int rows,int cols,int numberX) {
    int counter = 0;
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j < cols ; j++) {
            if(matrix[i][j]==numberX){
                return true;
            }
        }
    }
    return false;
}


int main() {
    srand((unsigned) time(NULL));
    int matrix1[3][3];
    cout << "\n\nMatrix 1 : \n\n";
    random3x3Array(matrix1,3,3);
    printMatrix(matrix1,3,3);
    float number = ReadNumber("\n\nEnter the number you want to find in matrix ? ");
    string message = isNumberXFoundInMatrix(matrix1,3,3,number)? "yes it is there ":"no its not there";
    cout << message;

    return 0;
}