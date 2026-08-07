#include <iostream>
using namespace std;
int main()
{
 const int age = 16;
 const double height = 1.80;
 
 int banak = age + 2;
// age = 20;//compiler error
// height = 1.99;//compiler error
 cout << age << endl;
 cout << height << endl;
 cout << banak << endl;

}