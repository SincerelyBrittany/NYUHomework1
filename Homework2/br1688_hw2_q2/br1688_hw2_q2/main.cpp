#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
        
    
        double dollarAmount;
        double centAmount;
        float balance;
    
        int change, quarters, dimes, nickels, pennies; // declare variables
    
        cout << " Please enter your amount in the format of dollars and cents separated by a space: " << endl;
        cin >> dollarAmount >> centAmount;
    
        balance = dollarAmount + (centAmount *.01);
    
        change = balance * 100;
        quarters = change / 25; // calculate the number of quarters
        change = change % 25; // calculate remaining change needed
        dimes = change / 10; // calculate the number of dimes
        change = change % 10; // calculate remaining change needed
        nickels = change / 5; // calculate the number of nickels
        pennies = change % 5; // calculate pennies
    
        cout << dollarAmount << " dollars and " << centAmount << " cents are:" << endl; // display # of pennies
    
        cout << quarters << " quarters, " << dimes<< " dimes, " << nickels<< " nickels and " <<pennies<< " pennies " <<endl;
    
        
        return (0);
    
}





































//#include <iostream>
//using namespace std;
//
//
//
//
//int main(int argc, char *argv[])
//{
//    using namespace std;
//    
//    double purchaseAmount;
//    double paidAmount;
//    float balance;
//    
//    int change, quarters, dimes, nickels, pennies, tenDollar, fiveDollar; // declare variables
//    
//    cout << "Enter Total purchased amount" << endl;
//    cin >> purchaseAmount;
//    
//    cout << "Enter Total paid amount" << endl;
//    cin >> paidAmount;
//    
//    balance = paidAmount - purchaseAmount ;
//    
//    tenDollar = balance / 10; // calculate the number of Ten Dollars
//    change =   tenDollar  % 10  ; // calculate the change needed
//    change = balance * 100;
//    quarters = change / 25; // calculate the number of quarters
//    change = change % 25; // calculate remaining change needed
//    dimes = change / 10; // calculate the number of dimes
//    change = change % 10; // calculate remaining change needed
//    nickels = change / 5; // calculate the number of nickels
//    pennies = change % 5; // calculate pennies
//    
//    cout << "\nQuarters: " << quarters << endl; // display # of quarters
//    cout << " Dimes: " << dimes << endl; // display # of dimes
//    cout << " Nickels: " << nickels << endl; // display # of nickels
//    cout <<" Pennies: " << pennies << endl; // display # of pennies
//    cout <<" Ten dollar: " << tenDollar << endl; // display # of Ten dollar
//    //cout <<" Five dollar: " << fiveDollar << endl; // display # of Ten dollar
//    
//    return (0);
//    
//}



//int main(int argc, const char * argv[]) {
//    
//  int numberOfDollars, numberOfCents;
//
//    
//    cout << "Please enter your amount in the format of dollars and cents separated by a space: " << endl;
//    
//    cin  >> numberOfDollars;
//    cin  >> numberOfCents;
//
//
//    cout << numberOfDollars << " dollars and " << numberOfCents << " cents are: "<< endl;
//    
////    
////    money = ((numberOfQuarters * .25) + (numberOfDimes * .10) + (numberOfNickels * .05) + (numberOfPennies * .01));
////    
////    totalDollars = money;
////    totalMoney = money * 100;
////    totalCents = totalMoney % 100;
////    
////    cout << "The total is " << totalDollars <<" dollars and " << totalCents << " cents"<< endl;
////    
//    
//    
//    
//    return 0;
//}
