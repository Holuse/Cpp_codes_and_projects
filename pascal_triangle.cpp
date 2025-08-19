#include <iostream>
#include <limits>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
}
int main(){
    while (true){
        cout << "Please enter the number of the lines you want to calculate: ";
        int input,number;
        cin >> input;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number!";
            continue;
        }
        for(int line = 1; line <= input; line++){
            for (int blank = input - 1; blank >= line; blank--) {
            cout << "  ";
            }
            for(int i = 1; i <= line; i++){
                if (i == 1 || i == line){
                    number = 1;
                    cout << number << "   ";
                
                }
                else if(i == 2 || i == line - 1){
                    cout << line -1 << "   ";
                    
                }
                else{
                    number = factorial(line - 1) / factorial(i - 1) / factorial(line - i);
                    cout << number << "   ";
                }
        }
        cout << "\n";
    }
}
}