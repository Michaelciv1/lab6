#include "LoShuSquare.h"
#include <iostream>

using namespace std;

LoShuSquare::LoShuSquare()
{
    for (int i=0; i < ROWS; i++)
        for (int j=0; j < COLS; j++)
        squares[i][j] = 0;
}

void LoShuSquare::printBoard(){
    int cnt = 0;
    for (int i=0; i < ROWS; i++)
        for (int j=0; j < COLS; j++){
        cout << squares[i][j];
        cnt += 1;
        if (cnt % COLS == 0)
            cout << endl;
    }
}

void LoShuSquare::fill(int row, int col, int value){
    squares[row][col] = value;
}

bool LoShuSquare::checkRow(){
    int sum = 0;
    for (int i=0; i < ROWS; i++)
        for (int j=0; j<COLS; j++)
        sum += squares[i][j];
    if (sum == 45)
        return true;
    else
        return false;
}
bool LoShuSquare::checkCol(){
    int sum = 0;
    for (int i=0; i < ROWS; i++)
        for (int j=0; j<COLS; j++)
        sum += squares[j][i];
    if (sum == 45)
        return true;
    else
        return false;
}


bool LoShuSquare::checkDiag(){
    int leftDiag = squares[0][0] + squares[1][1] + squares[2][2];
    int rightDiag = squares[2][0] + squares[1][1] + squares[0][2];
    if (leftDiag == rightDiag)
        return true;
    else
        return false;
}


bool LoShuSquare::check(){
    if (checkRow() == true && checkCol() == true && checkDiag() == true)
        return true;
    else
        return false;
}
