#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int collection [] {3,5,22,15,27,9,8,299,9999};
    for(int numbers : collection){
        if(numbers %3 ==0 ){
            cout << numbers << " ";
        }
        
    }
}