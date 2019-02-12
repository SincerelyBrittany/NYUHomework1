#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int positiveNum1, positiveNum2, addition, subtraction, multiply, modifier;
    double divide;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    
    cout << "Please enter two positive integers, separated by a space " << endl;
    //user input
    cin  >> positiveNum1;
    cin  >> positiveNum2;
    
    // addition:
    addition = positiveNum1 + positiveNum2;
    cout << positiveNum1<< " + " << positiveNum2 << " = " << addition << endl;
    
    //subtraction
    subtraction = positiveNum1 - positiveNum2;
    cout << positiveNum1<< " - " << positiveNum2 << " = " << subtraction << endl;
    
    //multiply
    multiply = positiveNum1 * positiveNum2;
    cout << positiveNum1<< " * " << positiveNum2 << " = " << multiply << endl;
    
    //divide
    divide = (double)positiveNum1/positiveNum2;
    cout << positiveNum1<< " / " << positiveNum2 << " = " << divide << endl;
    
    //div
    div_t divresult;
    divresult = div (positiveNum1,positiveNum2);
    cout << positiveNum1<< " div " << positiveNum2 << " = " << divresult.quot << endl;
    
    //mod
    modifier = positiveNum1 % positiveNum2;
    cout << positiveNum1<< " mod " << positiveNum2 << " = " << modifier << endl;
    
    
    return 0;
}



//    div_t divresult;
//    divresult = div (38,5);
//    printf ("38 div 5 => %d, remainder %d.\n", divresult.quot, divresult.rem);



//
//    cout ("38 div 5 => %d, remainder %d.\n", divresult.quot, divresult.rem)
//
//    cout << positiveNum1<< " mod " << positiveNum2 << " = " << remainder << endl;
