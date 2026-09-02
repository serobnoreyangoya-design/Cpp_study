#include <iostream>
using namespace std;
int main()
{
    const size_t count = 15;
    /*
for(size_t x = 0; x < count ; x+=2){
     if(x == 6)
     continue;


    if(x > 9)
    break;
    cout << x << endl;
}
   */
/*
   size_t x = 0;

   while (x < count)
   {
    
     x++;

     if( x == 5 )
     continue;


     cout << x << endl;

     if(x == 12)
     break;
   

   }
*/

size_t x = 0;

do{
x++;


if(x == 5 )
continue;

cout << x << endl;

if(x == 10)
break;
      
}while(x < count);



}