#include <iostream>
using namespace std;
int main()

{
   char  c1, c2 ,c3 , c4 , c5;
   c1 = 'A';
   c2 = 'B';
   c3 = 'C';
   c4 = 'D';
   c5 = 'E';
    
   cout << c1 << endl;
   cout << c2 << endl;
   cout << c3 << endl;
   cout << c4 << endl;
   cout << c5 << endl;
   
   
   char value = 35;
   cout << "The ASCII value of 35 is " <<  value << endl;
   cout  << "The integer value of 35 is " << static_cast<int>(value) << endl;
}