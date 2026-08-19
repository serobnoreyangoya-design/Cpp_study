#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ 
    int a,b;

    a = 11;
    b = 77;

    int max;
/*
    if (a > b){
        max = a;
    }
    else {
        max = b;

    }
    cout << max << endl;
*/

max = (a > b)? a : b;
cout << max << endl;

auto max1 = (a > b) ? a : 12.3f;
cout   << max1 << setw(5)<<typeid(max1).name()<< endl;

} 