#include <iostream>
using namespace  std;
int main()
{
  int increment = 10;
  int n1 = 25;
  int n2 = 39;
  int n3 = 22;
  int result = (n1 %= (++increment), n2 += increment , n3 - n2);
  cout << result  << endl;
}