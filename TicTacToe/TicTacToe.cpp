#include <iostream>
using namespace std;

char square[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
int player1, player2;
char choiceP1, choiceP2;

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

void board(char choiceP1, char choiceP2)
{
    cout << "Player 1 (" << choiceP1 << ")  --  Player 2 (" << choiceP2 << ")" << endl << endl;
    cout << endl;
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

void choosePlayer(char choiceP1, char choiceP2)
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
        choosePlayer(choiceP1, choiceP2);
        break;
    }

    board(choiceP1, choiceP2);
}

void markChoice(char square[9], int player, char choice)
{
    int position;
    cout << "Player " << player << ", enter a number:  " << endl;
    cin >> position;
    switch (position)
    {
    case 1:
        square[0] = choice;
        break;
    case 2:
        square[1] = choice;
        break;
    case 3:
        square[2] = choice;
        break;
    case 4:
        square[3] = choice;
        break;
    case 5:
        square[4] = choice;
        break;
    case 6:
        square[5] = choice;
        break;
    case 7:
        square[6] = choice;
        break;
    case 8:
        square[7] = choice;
        break;
    case 9:
        square[8] = choice;
        break;
    default:
        cout << "The input you entered was invalid. Please try again!" << endl;
        markChoice(square, player, choice);
        break;
    }
}

void game()
{
    //bool endGame = false;
    int turnSwapper = 0;
    int player;
    char choice;
    //player1 = x and player2 = o
    if (player1 == 1 && player2 == 2)
    {
        if (turnSwapper % 2 == 0)
        {
            //player1 turn
            player = player1;
            choice = choiceP1;
            markChoice(square, player, choice);
            turnSwapper++;
        }
        else
        {
            //player2 turn
            player = player2;
            choice = choiceP2;
            markChoice(square, player, choice);
            turnSwapper++;
        }
    }
    //player1 = o and player2 = x
    else
    {
        if (turnSwapper % 2 == 0)
        {
            //player1 turn
            player = player1;
            choice = choiceP1;
            markChoice(square, player, choice);
            turnSwapper++;
        }
        else
        {
            //player2 turn
            player = player2;
            choice = choiceP2;
            markChoice(square, player, choice);
            turnSwapper++;
        }
    }
}

bool mainMenu(char square[])
{
    menu();
    int menuChoice;
    cin >> menuChoice;
    switch (menuChoice)
    {
    case 1:
        choosePlayer(choiceP1, choiceP2);
        game();
        return true;
        break;
    case 2:
        cout << endl;
        cout << "1. The game is played on a grid that's 3 squares by 3 squares." << endl;
        cout << "2. For example, you are X and your friend is O. Players take turns putting their marks in empty squares." << endl;
        cout << "3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner." << endl;
        cout << "4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie." << endl << endl << endl;
        return true;
        break;
    case 0:
        cout << "See you soon!";
        return false;
        break;
    default:
        cout << "The input you entered was invalid. Please try again!" << endl;
        mainMenu(square);
        return true;
        break;
    }
}

int main()
{
    bool exitProgram = true;
    do
    {
        exitProgram = mainMenu(square);
    } while (exitProgram != false);
}