//
//  main.cpp
//  This is the tester for the LoShuSquare class
//
//  Created by Hellen Pacheco on 6/9/19.
//  Copyright © 2018 Hellen Pacheco. All rights reserved.
//

#include <iostream>
#include "LoShuSquare.h"

using namespace std;

int main(int argc, const char * argv[]) {

    LoShuSquare magic;
    bool isMagic = false;
    const int MAX = 3;
    int row, col, value;

    do
    {
        for (row = 0; row < MAX; row++)
        {
            cout << "Please enter values for row " << row << " separated by space: ";
            for (col = 0; col < MAX; col++)
            {
                cin >> value;
                magic.fill(row, col, value);
            }
            magic.printBoard();
            if (magic.check())
            {
                isMagic = true;
                cout << "Congratulations, this is a magic square!" << endl;
            }
            else
            {
                cout << "This is not a magic square. Try again. " << endl;
            }
        }
    } while (!magic.check());
    return 0;
}

/*OUTPUT
Please enter values for row 0 separated by space: 4 9 2
492
000
000
This is not a magic square. Try again.
Please enter values for row 1 separated by space: 3 5 7
492
357
000
This is not a magic square. Try again.
Please enter values for row 2 separated by space: 8 1 6
492
357
816
Congratulations, this is a magic square!

Process returned 0 (0x0)   execution time : 17.507 s
Press any key to continue.
*/
