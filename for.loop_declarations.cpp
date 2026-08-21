#include <iostream>
using namespace std;
int main()
{
  for(size_t i = 0, x = 10, y=33 ; y > 30 ; i++ ,x -=2, y-- ){
    cout << i << endl;
    cout << x << endl;
    cout << y << endl;
    cout << "---------------" << endl;
  }

}