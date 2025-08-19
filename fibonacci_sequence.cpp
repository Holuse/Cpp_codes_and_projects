#include <iostream>
#include <limits>
using namespace std;
int main(){
    while (true){
        cout << "Enter a number till the fibonacci sequence will be calculated : ";
        int number;
        cin >> number;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number\n";
            continue;
        }
        else if (number < 0){
        cout << "Please enter a valid number\n";
        continue;}

        int first_number = 1, second_number = 2; 
        cout << first_number << " " << second_number << " ";
        for(int latest_number=2; latest_number <= number;){
            latest_number = second_number + first_number;
            first_number = second_number;
            second_number = latest_number;
            if(latest_number>number)
            break;
            cout << latest_number << " ";
            }
    cout << "\n";
    }
}