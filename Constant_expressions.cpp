#include <iostream>
using namespace std;
int main()
{
 constexpr int legs = 4;//can't change the value
 constexpr double P = 3.14;//can't change the value 
 cout << legs << endl;
 cout << P << endl;

 const int fingers = 10;
constexpr int nails = fingers;//we must have constant value for constexpr
cout << fingers << endl;
cout << nails << endl;

constexpr int compileid = 1234;
static_assert(compileid == 1234);

cout << "Compiling succssed" ;

}