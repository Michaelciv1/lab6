#include "LoShuSquare.h"
#include <iostream>

using namespace std;

//Sets all the values in the square to zero
LoShuSquare::LoShuSquare()
{
    cout << "Enter the side length of the square: ";
    cin >> SIZE;
    int** squares = new int*[SIZE];  // allocates an array of pointers (each pointing to a row)
    for(int i = 0; i < SIZE; i++)
    squares[i] = new int[SIZE];  // allocates elements for each row
    for (int i=0; i < SIZE; i++)
        for (int j=0; j < SIZE; j++)
        squares[i][j] = 0;
}

//Prints the board in a 3x3 square. Does not return anything.
void LoShuSquare::printBoard(){
    int cnt = 0;
    for (int i=0; i < SIZE; i++)
        for (int j=0; j < SIZE; j++){
        cout << squares[i][j];
        cnt += 1;
        if (cnt % SIZE == 0)
            cout << endl;
    }
}

//Fills each square sequentially (row1 then row2 then row3) with the user input. Does not return anything.
void LoShuSquare::fill(int row, int col, int value){
    squares[row][col] = value;
}

//Private function that checks if the sum of all three rows adds to 45. Returns true or false.
bool LoShuSquare::checkRow(){
    int sum = 0;
    for (int i=0; i < SIZE; i++)
        for (int j=0; j<SIZE; j++)
        sum += squares[i][j];
    if (sum == 45)
        return true;
    else
        return false;
}

//Private function that checks if the sum of all three columns adds to 45. Returns true or false.
bool LoShuSquare::checkCol(){
    int sum = 0;
    for (int i=0; i < SIZE; i++)
        for (int j=0; j<SIZE; j++)
        sum += squares[j][i];
    if (sum == 45)
        return true;
    else
        return false;
}

//Private function that checks if the diagonals are equal to each other. Returns true or false.
bool LoShuSquare::checkDiag(){
    int leftDiag = squares[0][0] + squares[1][1] + squares[2][2];
    int rightDiag = squares[2][0] + squares[1][1] + squares[0][2];
    if (leftDiag == rightDiag)
        return true;
    else
        return false;
}

//Checks if all three private function checks returns true. Returns true or false.
bool LoShuSquare::check(){
    if (checkRow() == true && checkCol() == true && checkDiag() == true)
        return true;
    else
        return false;
}
