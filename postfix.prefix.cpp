#include <iostream>
using namespace std;
int main()
{
 int value = 7;
  
 cout << "value = " << value++ << endl; //7
 cout << "value = " << value << endl; //8


value = 7;

cout << "value = " << value-- << endl; //7
cout << "value = " << value << endl; //6



value = 15;

++value;
cout << "value = " << value << endl; //16

value = 67;

cout << "value = " << ++value << endl; //68



value = 12;

--value;
cout << "value =  " << value << endl; //11

value = 40;


cout << "value = " << --value << endl; 
}