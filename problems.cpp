#include <iostream>
using namespace std;
int main()
{
    int x = 100;
    
    do{
        if(x %19 ==0){
            cout << x << " ";
        }
        x++;
    }while(x < 1000);
}