#include <iostream>
#include <stdlib.h>
using namespace std;

char square[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
int player1, player2;
char choiceP1, choiceP2;
int turnSwapper = 0;
int turnCounter = 0;
int winner, loser;

bool mainMenu();

void menu()
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

void board()
{
    cout << "Player 1 (" << choiceP1 << ")  --  Player 2 (" << choiceP2 << ")" << endl << endl;
    cout << "           |     |     " << endl;
    cout << "        " << square[0] << "  |  " << square[1] << "  |  " << square[2] << endl;
    cout << "      _____|_____|_____" << endl;
    cout << "           |     |     " << endl;
    cout << "        " << square[3] << "  |  " << square[4] << "  |  " << square[5] << endl;
    cout << "      _____|_____|_____" << endl;
    cout << "           |     |     " << endl;
    cout << "        " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;
    cout << "           |     |     " << endl << endl;
}

void checkWin(int player)
{
    if (square[0] == square[1] && square[1] == square[2] && square[0] != ' ')
    {
        if (square[0] = winner)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[0] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[3] == square[4] && square[4] == square[5] && square[3] != ' ')
    {
        if (square[3] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[3] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[6] == square[7] && square[7] == square[8] && square[6] != ' ')
    {
        if (square[6] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[6] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[0] == square[3] && square[3] == square[6] && square[0] != ' ')
    {
        if (square[0] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[0] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[1] == square[4] && square[4] == square[7] && square[1] != ' ')
    {
        if (square[1] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[1] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[2] == square[5] && square[5] == square[8] && square[2] != ' ')
    {
        if (square[2] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[2] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[0] == square[4] && square[4] == square[8] && square[0] != ' ')
    {
        if (square[0] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[0] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[2] == square[4] && square[4] == square[6] && square[2] != ' ')
    {
        if (square[2] = player)
        {
            cout << "==> PLAYER " << winner << " WINS <==" << endl;
            exit(1);
        }
        else if (square[2] = player)
        {
            cout << "==> PLAYER " << loser << " WINS <==" << endl;
            exit(1);
        }
    }
    else if (square[0] != ' ' && square[1] != ' ' && square[2] != ' ' && square[3] != ' ' && square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7] != ' ' && square[8] != ' ')
    {
        cout << "==> GAME DRAW <==" << endl;
        exit(1);
    }
    
}

void markChoice(int player, char choice)
{
    int position;
    cout << "Player " << player << ", enter a number:  ";
    cin >> position;
    switch (position)
    {
        case 1:
            if (square[0] == ' ')
            {
                square[0] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 2:
            if (square[1] == ' ')
            {
                square[1] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 3:
            if (square[2] == ' ')
            {
                square[2] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 4:
            if (square[3] == ' ')
            {
                square[3] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 5:
            if (square[4] == ' ')
            {
                square[4] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 6:
            if (square[5] == ' ')
            {
                square[5] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 7:
            if (square[6] == ' ')
            {
                square[6] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 8:
            if (square[7] == ' ')
            {
                square[7] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        case 9:
            if (square[8] == ' ')
            {
                square[8] = choice;
                board();
                break;
            }
            else
            {
                cout << "The input you entered was invalid. Please try again!" << endl;
                markChoice(player, choice);
                break;
            }
        default:
            cout << "The input you entered was invalid. Please try again!" << endl;
            markChoice(player, choice);
            break;
    }
}

void turnSwap()
{
    //bool endGame = false;
    int player;
    char choice;
    //player1 = x and player2 = o
    if (player1 == 1 && player2 == 2)
    {
        if (turnSwapper % 2 == 0)
        {
            //player1 turn
            turnSwapper++;
            turnCounter++;
            player = 1;
            choice = choiceP1;
            markChoice(player, choice);
            winner = 1;
            loser = 2;
            checkWin(player);
        }
        else
        {
            //player2 turn
            turnSwapper++;
            turnCounter++;
            player = 2;
            choice = choiceP2;
            markChoice(player, choice);
            winner = 2;
            loser = 1;
            checkWin(player);
        }
    }
    //player1 = o and player2 = x
    else
    {
        if (turnSwapper % 2 == 0)
        {
            //player1 turn
            turnSwapper++;
            turnCounter++;
            player = 1;
            choice = choiceP1;
            markChoice(player, choice);
            winner = 1;
            loser = 2;
            checkWin(player);
        }
        else
        {
            //player2 turn
            turnSwapper++;
            turnCounter++;
            player = 2;
            choice = choiceP2;
            markChoice(player, choice);
            winner = 2;
            loser = 1;
            checkWin(player);
        }
    }
    turnSwap();
}

void choosePlayer()
{
    cout << "Player 1 :   X  or  O" << endl;
    cin >> choiceP1;

    switch (choiceP1)
    {
        case 'X':
            cout << endl << "Player 2 :   You are O." << endl << endl;
            choiceP2 = 'O';
            player1 = 1;
            player2 = 2;
            break;
        case 'O':
            cout << endl << "Player 2 :   You are X." << endl << endl;
            choiceP2 = 'X';
            player1 = 2;
            player2 = 1;
            break;
        default:
            cout << "The input you entered was invalid. Please try again!" << endl;
            choosePlayer();
            break;
    }

    board();
    turnSwap();
}

bool mainMenu()
{
    menu();
    int menuChoice;
    cin >> menuChoice;
    switch (menuChoice)
    {
        case 1:
            choosePlayer();
            return true;
            break;
        case 2:
            cout << endl;
            cout << "1. The game is played on a 3 by 3 squares grid." << endl;
            cout << "2. For example, you are X and your friend is O. Players take turns putting their marks in empty squares." << endl;
            cout << "3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner." << endl;
            cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie." << endl << endl << endl;
            cout << "5. This is how the numbers players have to enter correspond with the grid: " << endl;
            cout << "           |     |     " << endl;
            cout << "        1  |  2  |  3  " << endl;
            cout << "      _____|_____|_____" << endl;
            cout << "           |     |     " << endl;
            cout << "        4  |  5  |  6  " << endl;
            cout << "      _____|_____|_____" << endl;
            cout << "           |     |     " << endl;
            cout << "        7  |  8  |  9  " << endl;
            cout << "           |     |     " << endl << endl;
            return true;
            break;
        case 0:
            cout << "See you soon!";
            return false;
            break;
        default:
            cout << "The input you entered was invalid. Please try again!" << endl;
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