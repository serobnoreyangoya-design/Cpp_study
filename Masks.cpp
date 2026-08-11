#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{

const unsigned char bit0 = 0b00000001;
const unsigned char bit1 = 0b00000010;
const unsigned char bit2 = 0b00000100;
const unsigned char bit3 = 0b00001000;
const unsigned char bit4 = 0b00010000;
const unsigned char bit5 = 0b00100000;
const unsigned char bit6 = 0b01000000;
const unsigned char bit7 = 0b10000000;

unsigned char number = 0b00000000; 
cout << "number = " << bitset<8>(number)<< endl;//00000000

number |= bit4;
cout << "number  = " << bitset<8>(number)<< endl;//00010000

number |= bit1;
cout << "number  = " << bitset<8>(number)<<endl;//00010010

number &= (~bit1);
cout << "number  = " << bitset<8>(number) << endl;//00010000

number |= (bit0|bit1|bit2|bit3|bit4|bit5|bit6|bit7);
cout << "number  = " << bitset<8>(number)<< endl;//11111111

number &= ~(bit1 | bit3 | bit5 | bit7);
cout << "number  = " << bitset<8>(number)<<endl;//01010101

cout << "bit0 is " << ((number & bit0)>>0) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit1 is " << ((number & bit1)>>1) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit2 is " << ((number & bit2)>>2) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit3 is " << ((number & bit3)>>3) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit4 is " << ((number & bit4)>>4) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit5 is " << ((number & bit5)>>5) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit6 is " << ((number & bit6)>>6) <<setw(10)<< bitset<8>(number)<< endl;
cout << "bit7 is " << ((number & bit7)>>7) <<setw(10)<< bitset<8>(number)<< endl;

cout << boolalpha;
cout << "bit6 is " << static_cast<bool>((number & bit6)>> 6) << endl;
cout << "bit7 is " << static_cast<bool>((number & bit7)>> 7) << endl;

cout << noboolalpha;
number ^= bit0;
cout << "number = " << bitset<8>(number);


}