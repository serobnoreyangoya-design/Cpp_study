#include <iostream>
using namespace std;
int main()
{

    int age;
    cout << "type your age : " ;
    cin >> age;

    if(age >= 21){
         if(age <=39){
            cout << "You are eligible for the treatment" << endl;
         }
         else { 
            cout << "you are too old for treatment" << endl;
         }
    }
    else if(age < 21 ){
      cout << "You are too young for treatment" << endl;

    }
    
    

    
}