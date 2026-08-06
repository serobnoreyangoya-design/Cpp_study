#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;
int main()
{
 short int num1 = 80;
 short int num2 = 40;
 
 char num3 = 12;
 char num4 = 45;

 cout << "size of num1 is " << sizeof(num1) << endl;
 cout << "size of num2 is " << sizeof(num2) << endl;
 cout << "size of num3 is " << sizeof(num3) << endl;
 cout << "size of num4 is " << sizeof(num4) << endl;


 auto result1 =  num1 + num2;
 auto result2 = num3 - num4;

cout << typeid(result1).name() << setw(2) << sizeof(result1) << endl;
cout << typeid(result2).name()<< setw(2) << sizeof(result2) << endl;
 
}