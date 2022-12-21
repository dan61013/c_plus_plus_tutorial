#include <iostream>
using namespace std;

int main() {
    char player_01;
    char player_02;
    cout << "Enter paper, rock, scissors for player1: " << endl;
    cin >> player_01;
    cout << "Enter paper, rock, scissors for player2: " << endl;
    cin >> player_02;

    if (player_01 == 's' or player_01 == 'r' or player_01 == 'p')
        if ((player_01 == 'p') and (player_02 == 'r'))
            cout << "player_01 win!" << endl;
        else if ((player_01 == 'r') and (player_02 == 's'))
            cout << "player_01 win!" << endl;
        else if ((player_01 == 's') and (player_02 == 'p'))
            cout << "player_01 win!" << endl;
        else if (player_01 == player_02)
            cout << "Tie" << endl;
        else
            if (player_02 == 's' or player_02 == 'r' or player_02 == 'p')
                cout << "player_02 win!" << endl;
            else
                cout << "Not in range" << endl;
    else
        cout << "Not in range" << endl;

    return 0;
}