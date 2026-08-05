#include <iostream>
using namespace std;
int main()

{
 int value = 80;

 value += 4;
 cout << "value = " << value  << endl; //84



 value -= 80;
 cout << "value = " << value << endl;//4

  
 value *= 90;
 cout << "value = " << value << endl;//360


 value /= 3;
 cout << "value = " << value << endl;//120


 value %= 12;
 cout << "value = " << value << endl;//0
}