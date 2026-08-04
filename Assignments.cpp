#include <iostream> 
using namespace std;
int main()
{
 int var1 = 10;
 cout << "var1: " << var1 << endl;


 var1 = 20; // Reassigning a new value to var1
 cout << "var1 after reassignment: " << var1 << endl;



 cout <<"---------------------" << endl;


 double var2 = 65.14;
 cout << "var2: " << var2 << endl;


 var2 = 75.14; // Reassigning a new value to var2
 cout << "var2 after reassignment: " << var2 << endl;

 cout <<"---------------------" << endl;


 bool var3 = true;
    cout << boolalpha;
    cout << "var3: " << var3 << endl;

    var3 = false; // Reassigning a new value to var3
    cout << "var3 after reassignment: " << var3 << endl;




 auto var4 = 100u; // Using auto to deduce the type of var4
    cout << "var4: " << var4 << endl;

    var4 = 200; // Reassigning a new value to var4
    cout << "var4 after reassignment: " << var4 << endl;   

     
}