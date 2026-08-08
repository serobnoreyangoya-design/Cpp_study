#include <iostream>
#include <limits>
using namespace std;
int main()
{
    unsigned char data = 254; //0~255

    ++data;
    cout  << static_cast<int>(data)   << endl;//255 //ff

    ++data;
    cout <<  static_cast<int>(data)   << endl;//0 


    data = 1;//0~255
    
    --data;
    cout << static_cast<int>(data) << endl; //0

    --data;
    cout << static_cast<int>(data) << endl;//255


}