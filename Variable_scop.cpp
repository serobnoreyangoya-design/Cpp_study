#include <iostream>
using namespace std;

int global_var ;

int main()
{
bool color =  true ;
global_var++;
if(color){
    global_var++;
    int count = 10;
    cout << "count : " << count << endl;
}
else{
    global_var++;
    //++color:compiler error 
    cout << "you haven't pick a color " << endl;
}

cout << global_var << endl;
}