#include <iostream>
using namespace std;
int main()
{
 const unsigned int Red = 0xFF000000;
 const unsigned int Blue = 0x00FF0000;
 const unsigned int Green = 0x0000FF00;
 const unsigned int Alpha = 0x000000FF;

 unsigned int color = 0xAABCDE00;

 cout << hex << showbase;
 cout << "Red : "  << ((color & Red)>>24) << endl;
 cout << "Blue : " << ((color & Blue)>>16) << endl;
 cout << "Green : " << ((color & Green)>>8) << endl;
 cout << "Alpha : " << ((color & Alpha)>>0) << endl;

}