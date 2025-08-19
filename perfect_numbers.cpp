#include <iostream>
#include <limits>
using namespace std;
int main(){
    while (true){
        cout << "Please enter a number to calculate if that number is a Perfect number or not: ";
        int number,state1=0;
        cin >> number;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number!\n";
            continue;
        }
        for(int i = 1; i <= number / 2; i++){   //checking for the divisors
            if(number % i == 0){
                state1 = state1 + i;            // adding up the divisors
            }
        }
        if(number == state1){                   // checking the Perfectivity of that number(excuse my english :D )
            cout << number << " is a Perfect number.\n";
        }
        else{
                cout << number << " is not a Perfect number.\n";
            }
        string input;
        do{
            cout << "Do you want to continue? (yes/no) : ";     // continuation of program up to users choice
            cin >> input;
            if(input == "yes"){
            break;
            }
            else if (input == "no"){
            return 0;
            }
            else
                cout << "Please enter a valid input! (yes/no)\n";
        } while(input != "yes");
    }
}