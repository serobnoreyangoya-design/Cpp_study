#include <iostream>
#include <limits>
using namespace std;
int main()
{
 cout << "The minimum number of short is  " <<std::numeric_limits<short>::min() << endl;
 cout <<  "The maximum number of short is  " <<std::numeric_limits<short>::max() << endl;
 
 cout << endl;
  
 cout << "The minimum number of unsigned short is  " <<std::numeric_limits<unsigned short>::min() << endl;
 cout << "The minimum number of unsigned short is  " <<std::numeric_limits<unsigned short>::max() << endl;

cout << endl;

 cout << "The minimum number of int is  " <<std::numeric_limits<int>::min() << endl;
 cout << "The maximum number of int is  " <<std::numeric_limits<int>::max() << endl;


 cout << "The minimum number of float is  " <<std::numeric_limits<float>::min() << endl;
 cout << "The maximum number of float is  " <<std::numeric_limits<float>::max() << endl;



 cout << "int is signed " <<std::numeric_limits<int>::is_signed << endl;
 cout << " int digits " <<std::numeric_limits<int>::digits << endl;


}