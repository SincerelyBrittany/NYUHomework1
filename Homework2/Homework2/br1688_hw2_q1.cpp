#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies, totalMoney, totalDollars, totalCents;
    double money;
   
    cout << "Please enter number of coins: " << endl;
    
            cout << "# of quarters: ";
            cin  >> numberOfQuarters;
    
            cout << "# of dimes: ";
            cin  >> numberOfDimes;
    
            cout << "# of nickels: ";
            cin  >> numberOfNickels;
    
            cout << "# of pennies: ";
            cin  >> numberOfPennies;
    
    
            money = ((numberOfQuarters * .25) + (numberOfDimes * .10) + (numberOfNickels * .05) + (numberOfPennies * .01));
    
            totalDollars = money;
            totalMoney = money * 100;
            totalCents = totalMoney % 100;
    
            cout << "The total is " << totalDollars <<" dollars and " << totalCents << " cents"<< endl;
    


    
    return 0;
}


