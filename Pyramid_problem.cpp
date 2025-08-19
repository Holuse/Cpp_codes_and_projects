#include <iostream>
using namespace std;
int main(){
    cout << "Please specify the number of lines your pyramid should have: ";
    int lines;
    cin >> lines;
    for (int i = 1; i <= lines; i++) {
        for (int blank = lines - 1; blank >= i; blank--) { // in a pyramid, it comes clearly that the number of blanks
            cout << " ";                 // before the first dot is equal to the number of lines minus the current line number
        }                                // and the others follow the same logic for ex. in a pyramid with 3 lines
                                         // 1st line has 2 blanks, 2nd line has 1 blank, and 3rd line has no blanks
        for (int j = 1; j <= (2 * i - 1); j++) {  
            cout << ".";                 // the number of dots in a pyramid is equal to 2 * current line number - 1
        }
        cout << "\n";
    }
}