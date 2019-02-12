#include <iostream>
using namespace std;


int main()
{
    int johnDays,johnHours,johnMins;	//stores john time
    int billDays,billHours,billMins;	//stores bills time
    int totalDays,totalHours,totalMins;	//to stores all time
    

    
    //collect john time
    cout<<"Please enter number of days John has worked: "; cin>> johnDays;
    cout<<"Please enter number of hours John has worked: "; cin>> johnHours;
    cout<<"Please enter number of minutes John has worked: "; cin>> johnMins;
    cout<<endl;
    
    //collect bill time
    cout<<"Please enter number of days John has worked: "; cin>> billDays;
    cout<<"Please enter number of hours John has worked: "; cin>> billHours;
    cout<<"Please enter number of minutes John has worked: "; cin>> billMins;
    cout<<endl;
    
    //add times
    totalMins=johnMins+billMins;
    totalHours=johnHours+billHours+(totalMins/60);
    totalDays=johnDays+billDays+(totalHours/24);
    totalHours=totalHours%24;
    totalMins=totalMins%60;	//remaining minutes
    
    cout << "The total time both of them worked together is: "
        <<  totalDays << " days, "
        << totalHours << " hours and "
        << totalMins << " minutes" << endl;

    
    return 0;
}






