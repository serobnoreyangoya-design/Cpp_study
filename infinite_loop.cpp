#include <iostream>
using namespace std;
int main()
{
    /*
    for(size_t x = 0 ; true ; x++){
        cout << x << endl;//infinitive numbers
    }
    */
   /*
size_t x = 0;

 bool condition = true ;

    while(condition){
        cout << x << endl;
        ++x;
    }
   */

   /*
size_t x = 10;
 

do{
    cout << x << endl;
    ++x;
}while(true);
*/



double number1 , number2;
char operation ;
bool end = false ;

while((end == false)){
    cout << "enter your numbers " << endl;


cin >> number1 >> number2;

cout << "enter your operation +,-,*,/" << endl;
cin >> operation;

switch(operation)
{

case '+':
cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
break;

case '-':
cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
break;

case '*':
cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
break;

case '/':
cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
break;
default:
cout << "invalid" << endl;
break;

}

char go_on ;
cout << "do you want to continue ?? : Yes - y | No - n " << endl;
cin >> go_on ;

if(go_on == 'Y' || go_on == 'y'){
    end = false;
}
else {
    end = true;
}

}

 
    
}