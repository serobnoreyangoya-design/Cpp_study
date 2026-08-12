#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;
int main()
{
 int space = 10;
 unsigned char variable = 0x78;

cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;

variable <<= 2;
cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;


variable >>= 4;
cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;


variable |= 0b00001111;
cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;

variable &= 0b10100101;
cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;

variable ^= 0b00110100;
cout << "variable = " << setw(space) << static_cast<unsigned int>(variable) << " --- "<< bitset<8>(variable)<< endl;

     
}