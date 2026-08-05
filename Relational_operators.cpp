#include <iostream>
using namespace std;
int main()
{
    int number1,number2;
    number1 = 10;
    number2 = 45;

    cout << boolalpha;
    cout << "number1 > number2 " << "- " << (number1 > number2) << endl; //false
    cout << "number1 >= number2 " << "- " << (number1 >= number2) << endl; //false
    cout << "number1 < number2 " << "- " << (number1 < number2) << endl; //true
    cout << "number1 <= number2 " << "- " << (number1 <= number2) << endl; //true
    cout << "number1 == number2 " << "- " << (number1 == number2) << endl; //false
    cout << "number1 != number2 " << "- " << (number1 != number2) << endl; //true


    bool result = (number1 < number2);
    cout << number1 << "<" << number2 << " " << result;

}