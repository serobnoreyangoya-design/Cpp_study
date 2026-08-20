 #include <iostream>
 using namespace std;
 int main()
 {
  int condition = 1;

 switch (condition)
 {
    int x;//int x = 10 : compiler error
 case 0:
 int y;
 x = 0;
 x++;
 cout << x << endl;
 cout << "Zero" << endl;
 cout << "Zero1" << endl;

    break;

    case 1:
 y = 2;
 y++;
 cout << y << endl;
 cout << "One" << endl;
 cout << "One1" << endl;

    break;
 
 default:
 
 cout << "Non" << endl;
 cout << "ERROR" << endl;

    break;

 }

 }