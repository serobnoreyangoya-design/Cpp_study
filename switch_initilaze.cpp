#include <iostream>
using namespace std;

const int pen = 10;
const int pencil = 20;
const int eraser = 30;
const int circle = 40;

int main()
{
  int tool = pencil;

switch (int count = 5;tool)
{
     case pen:
     cout <<   "pen is active: count  " << count << endl;
     break;
      count++;
      case pencil:
     cout <<   "pencil is active: count  " << count << endl;
     break;

      case circle:
     cout <<   "circle is active: count  " <<  count << endl;
     break;

      case eraser:
     cout <<   "eraser is active: count  " << count << endl;
     break;
     
default:
 cout << "there isn't such as that tool" << endl;
break;
}

}