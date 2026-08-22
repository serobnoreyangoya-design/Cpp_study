#include <iostream>
using namespace std;
int main()
{
  size_t i = 0 ;
  const size_t count = 10000;
/*
  for(i ; i < count  ; ++i){

    //cout << i << endl;
  }

  cout << i << endl;//much faster 
  cout << "Done!" << endl;
  */

  while(i < count){
    //cout << i << endl;
    ++i;
  }
  cout << i << endl;
  cout << "Done" << endl;
}