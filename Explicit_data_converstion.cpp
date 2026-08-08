#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 double x , y;
 x = 12.45;
 y = 54.75;
 
 int sum = x + y;
 cout << sum << endl;
 cout << typeid(sum).name() << setw(10)<< sizeof(sum) << endl;

 sum = static_cast<int>(x) + static_cast<int>(y);
 cout << sum << endl;
 cout << typeid(sum).name() << endl;

 sum = static_cast<int>(x+y);
 cout << sum << endl;
 cout << typeid(sum).name();

 }