#include <iostream>
#include <bitset>
using namespace std;
int main()
{
 unsigned  int value = 100;

 cout << "dec = " << showbase << dec << value << endl;
 cout << "oct = " << showbase << oct << value << endl;
 cout << "hex = " << showbase << hex << value << endl;
 cout << "bin = " << bitset<10>(value) << endl;
}