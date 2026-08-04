#include <iostream>
#include <string>
using namespace std;
int main()
{ 
string country;
cout << "Enter your country name: ";
getline(cin, country);
cout << "i've heard about " << country << ":" << "i want to visit " << country << endl;
}