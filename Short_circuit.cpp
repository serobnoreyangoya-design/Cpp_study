#include <iostream>
using namespace std;

bool car(){
    cout << "car is available" << endl;
    return true;
}
bool house(){
    cout << "house is available"<< endl;
    return true;
}
bool job(){
    cout << "job isn't available"<< endl;
    return false;
}



int main()

{
    /*
   bool a,b,c,d,e,f,g,h;
   a = true;
   b = true;
   c = false;
   d = true;

   e = true;
   f = false;
   g = false;
   h = false;
   
   bool result = a && b && c && d;
   cout << boolalpha<< result << endl;

   bool result1 = e || f || g || h;
   cout << boolalpha << result1 << endl;
*/ 

 if(car() && house() && job()){
    cout << "it's perfect"<< endl;;
}
else {
    cout << "you should work more " << endl;
}

if(car() || house() || job()){
    cout << "it's perfect"<< endl;;
}
else {
    cout << "you should work more " << endl;
}

}

