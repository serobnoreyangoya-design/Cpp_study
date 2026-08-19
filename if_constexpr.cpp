#include <iostream>
using namespace std;
int main()
{
constexpr bool condition =  true;

if constexpr(condition){
cout << "condition is true" << endl;
}
else{
    cout << "condition is false " << endl;
}

}