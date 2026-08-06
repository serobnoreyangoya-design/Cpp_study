#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double x = 9.8;

 cout << "x rounded to floor is " << floor(x) << endl;
 cout << "x rounded to ceil is " << ceil(x) << endl;


 int y = -10000;

 cout << "Abs of x is " << abs(x) << endl;//9.8
 cout << "Abs of y is " << abs(y) << endl;//10000

 double e = exp(5);
  cout << "e=2.7182^5" << e << endl;


  cout << "2 ^ 4 =  " << pow(2,4) << endl;//16
  cout << "9 ^ 3 = " << pow(9,3) << endl;//729


  cout << "e power of " << log(72) << " = 72" << endl; 
  cout << "2 power of " << log2(8) << " = 8" << endl;

  cout << "The square of 225 = " << sqrt(225) << endl;//15

  cout << "8.209 rounded to " << round(8.209) << endl;//8
  cout << "3.5 rounded to " << round(3.5) << endl;//4
  cout << "2.6 rounded to " << round(2.6) << endl;//3


}