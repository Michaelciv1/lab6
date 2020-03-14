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
