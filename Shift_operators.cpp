#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
int main()
{
  int num = 0xa10;
  cout << "Size of int " << sizeof(short int) << endl;
  cout << num  << " --- "<< bitset<16>(num) << endl;  



  auto val = static_cast<short int>(num << 1);
  cout << val  << " --- "<< bitset<16>(val) << endl;  
  cout << typeid(val).name() << setw(5) << sizeof(val)<< endl;;


   val = static_cast<short int>(num << 2);
  cout << val  << " --- "<< bitset<16>(val) << endl;  

    val = static_cast<short int>(num << 3);
  cout << val  << " --- "<< bitset<16>(val) << endl;  


    val = static_cast<short int>(num << 4);
  cout << val  << " --- "<< bitset<16>(val) << endl;  


    val = static_cast<short int>(val >> 1);
  cout << val  << " --- "<< bitset<16>(val) << endl;  


  val = 1200;
  cout << "value = " << (val >> 1) << endl;// 1200/2=600



  val = 1200;
  cout << "value = " << (val << 1) << endl;// 1200*2=2400

}