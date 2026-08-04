#include <iostream>
using namespace std;
int main()

{
  auto var1 = 10;
  auto var2 = 20.5;
  auto var3 = 'A';
  auto var4 = 29.0f;
  auto var5 = 10000000000L; // long long  
  
  
  //int modifier suffixes
  auto var6 = 10u; //unsigned int
  auto var7 = 121ul; //unsigned long
  auto var8 = 146ll; //long long

  cout << "var1: " << var1 << endl;
  cout << "var2: " << var2 << endl;
  cout << "var3: " << var3 << endl;
  cout << "var4: " << var4 << endl;
  cout << "var5: " << var5 << endl;
  cout << "var6: " << var6 << endl;
  cout << "var7: " << var7 << endl;
  cout << "var8: " << var8 << endl;

  // Display the type of each variable using typeid
  cout << "The type of var1 is: " << typeid(var1).name() << endl;
  cout << "The type of var2 is: " << typeid(var2).name() << endl;
  cout << "The type of var3 is: " << typeid(var3).name() << endl;
  cout << "The type of var4 is: " << typeid(var4).name() << endl;
  cout << "The type of var5 is: " << typeid(var5).name() << endl;
  cout << "The type of var6 is: " << typeid(var6).name() << endl;
  cout << "The type of var7 is: " << typeid(var7).name() << endl;
  cout << "The type of var8 is: " << typeid(var8).name() << endl;


   
  cout << "The size of var1 is: " << sizeof(var1) << " bytes" << endl;
  cout << "The size of var2 is: " << sizeof(var2) << " bytes" << endl;
  cout << "The size of var3 is: " << sizeof(var3) << " bytes" << endl;
  cout << "The size of var4 is: " << sizeof(var4) << " bytes" << endl;
  cout << "The size of var5 is: " << sizeof(var5) << " bytes" << endl;
  cout << "The size of var6 is: " << sizeof(var6) << " bytes" << endl;
  cout << "The size of var7 is: " << sizeof(var7) << " bytes" << endl;
  cout << "The size of var8 is: " << sizeof(var8) << " bytes" << endl; 
}