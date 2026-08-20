#include <iostream>
using namespace std;
int main()
{

    int day ,target_day;
    cout << "type the day" << endl;
    cin >>  day;

    switch(day)
{
case 1:
    cout << "Monday"  <<  endl;
    break;
    
case 2:
    cout  << "Tuesday" <<  endl;
    break;

case 3:
     cout << "Wednesday"<<  endl;
     break;
     
case 4:
     cout << "Thursday"<<  endl;
     break;

case 5:
     cout << "Friday"<<  endl;
     break;


case 6:
     cout << "Saturday"<<  endl;
     break;
     
case 7:
     cout << "Sanday"<<  endl;
     break;     

default:
    cout << "Individual"<<  endl;

}
    int past;
    cout << "How many days would you like to go past" << endl;
     cin >> past;
    target_day = day - past;

    if(target_day <= 0){
        while(target_day <= 0){
        target_day +=7;
        
    }
    }

    

    switch(target_day)
{
case 1:
    cout << "Monday"  <<  endl;
    break;
    
case 2:
    cout  << "Tuesday" <<  endl;
    break;

case 3:
     cout << "Wednesday"<<  endl;
     break;
     
case 4:
     cout << "Thursday"<<  endl;
     break;

case 5:
     cout << "Friday"<<  endl;
     break;


case 6:
     cout << "Saturday"<<  endl;
     break;
     
case 7:
     cout << "Sanday"<<  endl;
     break;     
}

    
}

    
