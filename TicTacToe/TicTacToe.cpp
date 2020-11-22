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
    cout << " |                                        [2] How to Play                                    |       " << endl;
    cout << " |                                        [0] Quit                                           |" << endl;
    cout << " |                                                                                           |" << endl; 
    cout << "                                         Enter a choice: ";
    cin >> choice;                                       
   

    cout << endl;
    if (choice == 1)
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
    return 0;
    }
    if (choice == 2)
    {
       cout << "1. The game is played on a grid that's 3 squares by 3 squares." << endl;
       cout << "2. You are X, your friend is O. Players take turns putting their marks in empty squares." << endl;
       cout << "3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl;
       cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie." << endl;
    }
    if (choice == 0)
    {
      cout << "See you soon!";
      return 0;
    }
}
