#include <iostream>
using namespace std;
int main()
{
int number1 = 41;
int number2 = 42;

bool result = (number1 > number2);
cout << boolalpha;
cout << result << endl;
/*
if(result == true )
{
    cout << "go"<< endl;

}
if (result != true)
{
    cout << "stop" << endl;
}
*/
/*
if (number1 > number2)
{

    cout << "101" << endl;
}
else 
{

    cout << "202" << endl;
}
*/
/*
bool red,green,yellow,police_stop;
red = true  ;
green = true;
yellow = true;
police_stop = true;
if(red){
 
    cout << "stop" << endl;
}
if(green){

    cout << "go" << endl;
}
if(police_stop){
    cout << "stop -1"<< endl;
}
if(yellow){

    cout << "slow down";
}
*/
/*
bool red,green,yellow,police_stop;
red = true  ;
green = true;
yellow = false;
police_stop = true;
if(green){
 if(yellow){

    cout << "stop" << endl;
 }
 else{
    cout << "go" << endl;
 }
}
*/

bool red,green,yellow,police_stop;
red = true  ;
green = true;
yellow = true;
police_stop = true;
if(green && !police_stop){
    cout << "stop"<< endl;
} 
else{
    cout << "go" << endl;
}
 
}