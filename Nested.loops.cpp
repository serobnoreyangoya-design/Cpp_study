#include <iostream>
using namespace std;
int main()
{

    const size_t  ROW = 20;
    const size_t COL = 5;
/*
    for( int row = 0 ; row < ROW ; row++){

        for(int col = 0; col < COL ; col++ ){

            cout << " Row " << row << " Col " << col ;
        }
        cout << endl;
    }
*/

/*
int row = 0;
int col = 0;

while(row < ROW ){

  while(col < COL){

    cout << " Row " << row << " Col "  << col;
    col++;
  }

  col = 0;
  row++;
  cout << endl;
}
*/

int row = 0 ;
int col = 0 ;

do{
    do{
    cout << " Row " << row << " Col " << col ;
     ++col;
}while(col < COL);
cout << endl;  
col = 0;

row++;

}while(row<ROW);

}