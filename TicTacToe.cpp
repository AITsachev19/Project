#include <iostream>
using namespace std;

char square[10] = { 'o',' ',' ',' ',' ',' ',' ',' ',' ',' ' };

void board(char choiceP1, char choiceP2)
{

    cout << "Player 1 (" << choiceP1 << ")  --  Player 2 (" << choiceP2 << ")" << endl << endl;
    cout << endl;

    cout << "           |     |     " << endl;
    cout << "        " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "      _____|_____|_____" << endl;
    cout << "           |     |     " << endl;

    cout << "        " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "      _____|_____|_____" << endl;
    cout << "           |     |     " << endl;

    cout << "        " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "           |     |     " << endl << endl;
}


int main()
{
    cout << endl << "Tic Tac Toe" << endl << endl;
    char choiceP1, choiceP2;
    cout << "Player 1 :   X  or  O" << endl;
    cin >> choiceP1;
    if (choiceP1 == 'X' or choiceP1 == 'x')
    {
        cout << endl << "Player 2 :   You are O." << endl << endl;
        choiceP2 = 'O';
    }
    else if (choiceP1 == 'O' or choiceP1 == 'o')
    {
        cout << endl << "Player 2 :   You are X." << endl << endl;
        choiceP2 = 'X';
    }
    board(choiceP1, choiceP2);
}