#include <iostream>
#include <limits>
using namespace std;
int main() {
while (true) {
    cout << "Please enter the first number: ";
    int number1;
    cin >> number1;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');            // i used some help from ai to handle invalid input
        cout << "Invalid input. Please enter a valid integer." << endl;     
        continue;                                                          
    }
    cout << "Please enter the second number: ";
    int number2;
    cin >> number2;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');            
        cout << "Invalid input. Please enter a valid integer." << endl;
        continue;
    }     
    if (number1 == 0 || number2 == 0) {                                 // checking if the numbers are zero
        cout << "GCD and LCM cannot be calculated for zero. Please enter non-zero numbers." << endl;
        continue;
    }
    int gcd, lcm;
    for(int i = 1; i <= number1 && i <= number2; i++){       // finding the GCD using a simple loop
        if(number1 % i == 0 && number2 % i == 0){
            gcd = i;
        }
    }
    lcm = (number1 * number2) / gcd;    // lets say we have 2 random number with common divisor of 2, 2a and 2b
                                        // the gcd of them is 2, so when we make them multiply we get 2a * 2b = 4ab,
                                        // but we used the common divisor 2 times and when we divide it by the gcd
                                        // we get 4ab / 2 = 2ab, which is the LCM of the two numbers
    cout << "GCD of " << number1 << " and " << number2 << " is: " << gcd << endl;
    cout << "LCM of " << number1 << " and " << number2 << " is: " << lcm << endl;
    while (true){
        cout << "Do you want to continue? (yes/no): ";
        string response;
        cin >> response;
        if (response == "no")
            return 0;
        else if (response == "yes")
            continue;
        else
            cout << "Please enter yes or no.\n";
        }
    
    

    }
}