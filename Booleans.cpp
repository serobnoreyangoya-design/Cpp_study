#include <iostream>
using namespace std;
int main()
{
 bool red_light = true;
 bool green_light = false;

 if (red_light == true)
  {
    cout << "Stop!" << endl;
  }

  else 
    {
        cout << "Go!" << endl;
    }



    if (green_light)
 {
  cout << "Go!" << endl;

 }         


 else 
 {
    cout << "Stop!" << endl;
 }

 

 //sizof  boolean
 cout << "Size of boolean: " << sizeof(bool) << endl;

 cout << red_light << endl;
 cout<< green_light << endl;


  cout << boolalpha; // to print true or false instead of 1 or 0

 cout << red_light << endl;
 cout<< green_light << endl;


  return 0;

}

