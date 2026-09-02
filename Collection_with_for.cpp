#include <iostream>
using namespace std;
int main()
{

    for( const size_t multiply = 2 ; auto i : {1,2,3,4,5,6,7,8,9}){
         cout << " result " << i + multiply << endl;
    }
    cout << endl;
}