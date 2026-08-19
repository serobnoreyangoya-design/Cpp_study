#include <iostream>
using namespace std;

const int pen = 10;
const int pencil = 20;
const int eraser = 30;
const int circle = 40;

int main()
{
/* 
     int day;

 cin >> day;

switch(day)
{
case 1:
    cout << "Monday";
    break;
    
case 2:
    cout  << "Tuesday";
    break;

case 3:
     cout << "Wednesday";
     break;
     
case 4:
     cout << "Thursday";
     break;

case 5:
     cout << "Friday";
     break;


case 6:
     cout << "Saturday";
     break;
     
case 7:
     cout << "Sanday";
     break;     

default:
    cout << "Unknown";
}

*/
int tool = pencil;

switch (tool)
{
     case pen:
     cout <<   "pen is active " << endl;
     break;

      case pencil:
     cout <<   "pencil is active " << endl;
     break;

      case circle:
     cout <<   "circle is active " << endl;
     break;

      case eraser:
     cout <<   "eraser is active " << endl;
     break;

default:
 cout << "there isn't such as that tool" << endl;
break;
}







}
