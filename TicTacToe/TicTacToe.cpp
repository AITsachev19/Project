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

/***********************************************
The function returns the game status as listed
  1 means the game is over and there is a winner
  0 means the game is over and there is no winner
  2 means the game is in progress
  **********************************************/
int checkWin()
{
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (square[1] != ' ' && square[2] != ' ' && square[3] != ' ' && square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7] != ' ' && square[8] != ' ' && square[9] != ' ')
    {
        return 0;
    }
    else
    {
        return 2;
    }
}

int main()
{
    int choice;
    cout << " | *******  *******   ******      *******     *       ******      *******   ******    ****** |" << endl;
    cout << " |   ***      ***    **    **       ***      * *     **     **      ***    *      *   *      |"<<endl;
    cout << " |   ***      ***    **        **   ***     *   *    **         **  ***   *        *  ****** |" <<endl;
    cout << " |   ***      ***    **    **       ***    *******   **     **      ***    *      *   *      |"<<endl;
    cout << " |   ***    *******   ******        ***   *       *   ******        ***     ******    ****** |"<<endl;
    cout << " |                                        [1] Play                                           |" << endl;
    cout << " |                                        [2] How to Play                                    |" << endl;
    cout << " |                                        [0] Quit                                           |" << endl;
    cout << " |                                    Enter a choice:                                        |  ";
    cin >> choice;
    cout << endl;
    do
    {
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
    break;
    }
    while (choice == 1);
}
