/*
  CIS 22B

    Lab6: Prompts user to fill out a 3x3 square with numbers 1-9
    Determines if square is a LoShuMagic square
    p.s. still working on the extra credit so test using Pacheco's main.cpp

  Author: Michael Wallerius

  Date: 3/13/2020
*/

#ifndef LOSHUSQUARE_H
#define LOSHUSQUARE_H

const int ROWS = 3;
const int COLS = 3;

class LoShuSquare
{
    private:
        int squares[ROWS][COLS];
        bool checkRow();
        bool checkCol();
        bool checkDiag();
    public:
        LoShuSquare();
        void printBoard();
        void fill(int row, int col, int value);
        bool check();
};

#endif // LOSHUSQUARE_H
