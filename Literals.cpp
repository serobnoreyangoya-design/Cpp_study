#include <iostream>
using namespace std;
int main()
{
 unsigned  char unsigned_char = 59u;

 short short_num = -289;
 short int  short_int = 99;
 signed int signed_int = -763;//no need special literal type of signed int 
 unsigned int  unsigned_int = 29u;
 
 signed long signed_long = 2819l;
 unsigned long unsined_long = 192ul;

 signed long long signed_longl_long = 1234ll;
 unsigned long long unsigned_long_long = 2739ull;

unsigned int prize = 1'500'000u;

unsigned char number = 288u;//error [0~255]

unsigned int hex_number1 = 0xfa55u;

cout << hex_number1<< endl;

int octal = 0753u;

cout << "Octal with decimal is " << octal << endl;

char character = 'd';
int num = 20;
float float_number = 3.5f;
string string_literal = "this is a string literal";

cout << character << endl << flush ;
cout << num << endl << flush;
cout << float_number << endl << flush;
cout << string_literal << endl << flush;


}