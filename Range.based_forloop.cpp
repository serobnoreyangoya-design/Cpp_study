#include <iostream>
using namespace std;
int main()
{
 int collaction [] {1,2,3,4,5,6,7,8,9,10};
/*
 for( int value : collaction){
    cout << value << endl;
 }
*/

//old version
/*
for(size_t i = 0; i < 10 ; ++i){
    cout  << collaction[i] << endl;
}
*/
/*
for (int value : {1,2,3,4,5,6,7,8,9,10}){

    cout << value << endl;
} 
*/

for(auto value : {1,2,3,4,5,6,7,8,9,10}){
  cout << value << endl;
  cout << typeid(value).name() << endl;
}


}