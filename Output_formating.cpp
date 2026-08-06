#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 cout << " Hello world " << endl << flush;



 cout << setw(10) << "Name" << setw(10) << "Surename" << endl;
 cout << setw(10) << "Serob" << setw(10) << "Noreyan" << endl;
 cout << setw(10) << "Artash" << setw(10) << "Noreyan" << endl;
 cout << setw(10) << "Mane" << setw(14) << "Ghaltaxjyan" << endl;

 cout << endl;

int spaces = 10;

 cout << setw(spaces) << "Name" << setw(spaces) << "Surename" << endl;
 cout << setw(spaces) << "Serob" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Artash" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Mane" << setw(14) << "Ghaltaxjyan" << endl;

 cout << endl;

 cout << right;
 spaces = 20;

 cout << setw(spaces) << "Name" << setw(spaces) << "Surename" << endl;
 cout << setw(spaces) << "Serob" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Artash" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Mane" << setw(spaces) << "Ghaltaxjyan" << endl;

 cout << endl;


cout << left ;
 spaces = 20;

 cout << setw(spaces) << "Name" << setw(spaces) << "Surename" << endl;
 cout << setw(spaces) << "Serob" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Artash" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Mane" << setw(spaces) << "Ghaltaxjyan" << endl;

cout << endl;


cout << right;
cout << setw(10) << -394.76 << endl;
cout << internal;
cout << setw(10) << -394.76 << endl;

cout << endl;

 cout << left;
 spaces = 20;
 cout << setfill('-');

 cout << setw(spaces) << "Name" << setw(spaces) << "Surename" << endl;
 cout << setw(spaces) << "Serob" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Artash" << setw(spaces) << "Noreyan" << endl;
 cout << setw(spaces) << "Mane" << setw(spaces) << "Ghaltaxjyan" << endl;

 cout << endl;


 bool Alpha = true;
 bool Beta = false;


 cout << boolalpha;

 cout  << Alpha << endl << flush;
 cout  << Beta << endl  << flush; 

 cout << noboolalpha;

 cout  << Alpha << endl  << flush; 
 cout  << Beta << endl  << flush; 


 cout << endl ;

 int pos,neg;

 pos = 30;
 neg = -45;

 cout << showpos;

 cout << pos << endl << flush;
 cout << neg << endl << flush;

 cout << noshowpos; 

 cout << pos << endl << flush;
 cout << neg << endl << flush;


 cout << endl;

 int num = 382039;

 cout << hex << num << endl;//5d457

 cout << uppercase;

 cout << hex << num << endl;//5D547

cout << endl;

 double a = 2.84904247857855454365;
 double b = 80.0;
 double c = 7.34e-11;

 cout << fixed;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;


 cout << endl;


 cout << scientific;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;


 cout << endl;

 cout.unsetf(std::ios::scientific | std::ios::fixed );

 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "a = " << c << endl;

 cout << endl;


  a = 3.1455345432101978932688784;

 cout << setprecision(10) << a << endl;
 cout << setprecision(15) << a << endl;
 cout << setprecision(20) << a << endl;


cout << endl;

 a = 13.0;
 b = 209.74;


 cout << showpoint;
 cout << a << endl;
 cout << b << endl;
 

 cout << noshowpoint;
 cout << a << endl;
 cout << b << endl; 
}