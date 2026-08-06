#include <iostream>
using namespace std;
int main()
{
double a,b,c;

cout << "Enter  the lenght of box " << endl << flush;
cin >> a;  
cout << "Enter  the width of box " << endl << flush;
cin >> b;
cout << "Enter  the height of box " << endl << flush;
cin >> c;

double base_area = a * b;
double volume = base_area * c;

cout << base_area << endl;
cout << volume << endl;

}