#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
 const int space = 10;
 unsigned int  number1 = 0x9;//00001001
 unsigned int  number2 = 0x4;//00000100

 //AND
 cout << "number1 = " << setw(space) << bitset<8>(number1) << endl; 

 cout << "number2 = " << setw(space) << bitset<8>(number2) << endl; 

 cout << "number1 & number2 = " << setw(space) << bitset<8>(number1 & number2) << endl;//00000000

//OR 

cout << "number1 | number2 = " << setw(space) << bitset<8>(number1 | number2) << endl;//00001101

cout << "~number1 = " << setw(space) << bitset<8>(~number1) << endl;//11110110

cout << "~number2 = " << setw(space) << bitset<8>(~number2) << endl;//11111011

cout << "~10100001 = " << setw(space) << bitset<8>(~10100001) << endl;//11011110

cout << "~0x3b1 = " << setw(space) << bitset<8>(~0x3b1) << endl;//01001110

//XOR 

cout << "number1 ^ number2 = " << setw(space) << bitset<8>(number1 ^ number2) << endl;//00001101


}
