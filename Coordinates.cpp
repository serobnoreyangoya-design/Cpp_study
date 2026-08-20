#include <iostream>
using namespace std;
int main()
{
    double x,y;
    cout << "x = " ;
     cin >> x;
    cout << "y = " ;
    cin >> y;

    if(x > 5 || x < -5 || y > 10 || y < -10  ){
        cout << "you are out of the regtangle " << endl;
    }
    
  else {
    cout << "you are inside the regtangle" << endl;
  }
}