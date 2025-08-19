#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << "Welcome to the Battleship game!\n";
    int row,column,ships_hit = 0,ship_row_1,ship_row_2,ship_row_3,ship_column_1,ship_column_2,ship_column_3;
    srand(time(0));    
    while (true){
    ship_row_1 = rand() % 6 + 1;
    ship_row_2 = rand() % 6 + 1;
    ship_row_3 = rand() % 6 + 1;
    ship_column_1 = rand() % 6 + 1;
    ship_column_2 = rand() % 6 + 1;
    ship_column_3 = rand() % 6 + 1;
    if (ship_row_1 == ship_row_2 && ship_column_1 == ship_column_2 ||
        ship_row_1 == ship_row_3 && ship_column_1 == ship_column_3 ||
        ship_row_2 == ship_row_3 && ship_column_2 == ship_column_3  )
        continue;
    else
    break;
    }
/*
    cout << ship_row_1 << " " << ship_column_1 << "\n";        //THESE LINES ARE USED FOR TESTING!!!!!!!!!
    cout << ship_row_2 << " " << ship_column_2 << "\n";
    cout << ship_row_3 << " " << ship_column_3 << "\n";
*/
    string board[6][6] = {
        {"o | ","o | ","o | ","o | ","o | ","o "},
        {"o | ","o | ","o | ","o | ","o | ","o "},
        {"o | ","o | ","o | ","o | ","o | ","o "},
        {"o | ","o | ","o | ","o | ","o | ","o "},
        {"o | ","o | ","o | ","o | ","o | ","o "},
        {"o | ","o | ","o | ","o | ","o | ","o "},
    };
    while (true){
        cout << "This is your current board!\n\n";
        for(int i = 0; i < 6; i++){
            if(i == 0)
            for(int top = 1; top <= 6; top++){
                cout << "   " << top;
                if(top == 6)
                cout << "\n";
            }
        cout << i + 1 << "| ";
            for(int j = 0; j < 6; j++){
                if(j == 5)
                cout << board[i][j] << "\n";
                else
                cout << board[i][j];
            }
            if(i == 5)
            cout << "\n";
        }
        while (true){
        cout << "Please enter the row number you want to hit: ";
        cin >> row;
        if(cin.fail() || row <= 0 || row > 6){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid row number!\n";
            continue;
        }
        break;
    }
    while (true){
        cout << "Please enter the column number you want to hit: ";
        cin >> column;
        if(cin.fail() || column <= 0 || column > 6){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid column number!\n";
            continue;
        }
        break;
    }
        if(board[row - 1][column -1] == "x | " || board[row - 1][column -1] == "x"){
            cout << "\nYou cannot hit the tiles you have already hit!\n\n";
            continue;
        }
        if(row <= 6 && column < 6 )
            board[row - 1][column - 1] = "x | ";
        else if(row <= 6 && column == 6 )
            board[row - 1][column - 1] = "x";
        else
            return 1;
        if(ship_row_1 == row && ship_column_1 == column || ship_row_2 == row && ship_column_2 == column ||
            ship_row_3 == row && ship_column_3 == column ){
            cout << "\nYou hit!\n";
            ships_hit++;
            }
        else
        cout << "\nYou missed!\n";

    cout << 3 - ships_hit << " ships are remaining!\n\n";
     if(ships_hit == 3)
     break;
    }
    cout << "You won!";
    cin.ignore();
    cin.get();
}