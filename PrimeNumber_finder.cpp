#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a number to find all prime numbers till that number: ";
    cin >> x;
    cout << "Prime numbers till "<< x <<  " is : \n" << endl;
    int number = 1;             // no specific reason for starting at 1, just a choice
    while (number <= x){ 
        bool isPrime = true;
        if(number < 2){         // numbers less than 2 are not prime so they are going to be skipped
            isPrime = false;
        } else{
            for (int i=1; i <= number/2; i++){           // checking divisibility from 1 to number/2
                if (number % i == 0 && i !=1) {          // we could also use i <= number but it would look for all divisors
                    isPrime = false;                     // if a divisor is found other than 1 and the number itself
                    break;                               // then there is 2 divisors so there is no need to check for the 2. one                       
                }
            }
        }
    if (isPrime) {
        cout << number << endl;
        }
        number++;           // i accidentally put this line inside the if statement, and of course it didn't work lmao
    }
    cout << "\nEnd of the program, to continue press Enter..." << endl;
    cin.ignore();  
    cin.get();
    return 0;           // Thanks for your time
}