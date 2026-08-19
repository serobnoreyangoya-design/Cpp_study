#include <iostream>
using namespace std;
int main()
{

    int number = 0;
    bool bool_number = number;
    cout << boolalpha;

    if(bool_number){
        cout << "your number is " << bool_number << endl;
    }
    else {
        cout  << bool_number << " value" << endl;
    }
}