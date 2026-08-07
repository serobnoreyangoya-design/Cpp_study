#include <iostream>
using namespace std;
int main()

{
 bool a,b,c;
 a = false;
 b = true;
 c = true;

 cout << boolalpha;

 cout << "a && b " << (a && b) << endl; // true + false = false
 cout << "a && c " << (a && c) << endl; //true + false = false
 cout << "a && b && c " << (a && b && c) << endl; // false + true + true = false

  

 cout << "a || b "  << (a || b) << endl;
 cout << "a || c "  << (a || c) << endl;
 cout << "a || b || c "  << (a || b || c) << endl;


 cout << "!a " << !a << endl;
 cout << "!b " << !b << endl;
 cout << "!c " << !c << endl;


 cout << "!a && b || c " << !(a && b || c) << endl;//false



 int d,e,f;
 d = 30;
 e = 15;
 f = 60;

 cout << " d > e && d > f " << ((d>e) && (d>f)) << endl; //false
 cout << "e==d || f==e  " << ((e==d) || (f==e)) << endl;//false 

 }
