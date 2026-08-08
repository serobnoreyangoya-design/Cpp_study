#include <iostream>
using namespace std;
int main()
{
    double a = 67.7l;
    int b = 10;
    auto c = a * b;

    cout << "c = " << c << endl;
    cout << sizeof(c)<< endl;
    cout << typeid(c).name() << endl;//int >> double


    int x ;
    double y = 30.5;

    x = y;
    cout << typeid(x).name()  << x << endl; 

}