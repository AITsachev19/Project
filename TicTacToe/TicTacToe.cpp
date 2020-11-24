#include <iostream>
using namespace std;

char square[10] = { 'o',' ',' ',' ',' ',' ',' ',' ',' ',' ' };
int player = 1;
char choiceP1, choiceP2;
int i;

void greating()
{
    cout << " | *******  *******   ******      *******     *       ******      *******   ******    ****** |" << endl;
    cout << " |   ***      ***    **    **       ***      * *     **     **      ***    *      *   *      |" << endl;
    cout << " |   ***      ***    **        **   ***     *   *    **         **  ***   *        *  ****** |" << endl;
    cout << " |   ***      ***    **    **       ***    *******   **     **      ***    *      *   *      |" << endl;
    cout << " |   ***    *******   ******        ***   *       *   ******        ***     ******    ****** |" << endl;
    cout << " |                                        [1] Play                                           |" << endl;
    cout << " |                                        [2] How to Play                                    |" << endl;
    cout << " |                                        [0] Quit                                           |" << endl;
    cout << " |                                                                                           |" << endl;
    cout << "                                         Enter a choice: ";
}

int checkInput()
{
    int userInput;
    bool validInput = false;
    do
    {
        cin >> userInput;
        if (!(validInput = cin.good()))
        {
            cout << "The input was invalid. Try again!" << endl;
            greating();
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    } while (!validInput);
    return userInput;
}

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

void markChoice()
{
    char mark;
    int markChoice;

    player = (player % 2) ? 1 : 2;

    cout << "Player " << player << ", enter a number:  ";
    cin >> markChoice;

    mark = (player == 1) ? choiceP1 : choiceP2;

    if (markChoice == 1 && square[1] == ' ')
    {
        square[1] = mark;
    }
    else if (markChoice == 2 && square[2] == ' ')
    {
        square[2] = mark;
    }
    else if (markChoice == 3 && square[3] == ' ')
    {
        square[3] = mark;
    }
    else if (markChoice == 4 && square[4] == ' ')
    {
        square[4] = mark;
    }
    else if (markChoice == 5 && square[5] == ' ')
    {
        square[5] = mark;
    }
    else if (markChoice == 6 && square[6] == ' ')
    {
        square[6] = mark;
    }
    else if (markChoice == 7 && square[7] == ' ')
    {
        square[7] = mark;
    }
    else if (markChoice == 8 && square[8] == ' ')
    {
        square[8] = mark;
    }
    else if (markChoice == 9 && square[9] == ' ')
    {
        square[9] = mark;
    }
    else
    {
        cout << "Invalid move ";
        player--;
        cin.ignore();
        cin.get();
    }

    i = checkWin();
    player++;
}

bool mainMenu()
{
    greating();
        
        switch (checkInput())
        {
            case 1:
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

                do
                {
                    markChoice();
                    board(choiceP1, choiceP2);
                } while (checkWin() == 2);



                if (checkWin() == 1)
                {
                    cout << "<==   PLAYER " << --player << " WIN   ==>";
                }
                else
                {
                    cout << "<==   GAME DRAW   ==>";
                }
                return true;
                break;
            case 2:
                cout << "1. The game is played on a grid that's 3 squares by 3 squares." << endl;
                cout << "2. For example, you are X and your friend is O. Players take turns putting their marks in empty squares." << endl;
                cout << "3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner." << endl;
                cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie." << endl << endl;
                return true;
                break;
            case 0:
                cout << "See you soon!";
                return false;
                break;
            default:
                mainMenu();
                return true;
                break;
        }
}

int main()
{
    bool exitProgram = true;
    do
    {
        exitProgram = mainMenu();
    } while (exitProgram != false);
}
