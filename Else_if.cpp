#include <iostream>
using namespace std;

const int pen = 10;
const int pencil = 20;
const int eraser = 30;
const int circle = 40;

int main()
{ 
int tool = pen;

if(tool==pen){
    cout << "pen is active" << endl;
}
else if (tool==pencil){
    cout << "pencil is active" << endl;
}
else if (tool=eraser){
    cout << "eraser is active" << endl;
}
else if (tool==circle){
    cout << "circle is active" << endl;
}
}