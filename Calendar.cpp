#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    long int year, day, day_counter,mouth;
    day_counter = 1;
    mouth = 1;

    const int num_space = 10;

      string mouths_name[] = {"January","February","March","April","May","June","July","August","September","October","Novermber","Decamber"};

     size_t x = 0;
    cout << "Enter the year: " << endl;
    cin >> year;

    cout << "Enter the first day of this year  " << endl;
    cin >> day;

    

    cout << endl;

    

    

   
    

    while(mouth <= 12){
         while(x <= 11){
        cout << setw(40)<< mouths_name[x]  << setw(5)<< year << endl;
        
         

          if(mouth == 2 ){
            cout << setw(10) << "Monday"
         << setw(10) << "Tuesday"
         << setw(10) << "Wednesday"
         << setw(10) << "Thursday"
         << setw(10) << "Friday"
         << setw(10) << "Saturday"
         << setw(10) << "Sunday" << endl;

        cout << setw(day * num_space - 9) << "";

            while (day_counter <= 28)
    {

       
        cout << setw(num_space) << day_counter;

        day++;
        day_counter++;

        if (day > 7)
        {
            day = 1;
        }

        
        if (day == 1)
        {
            cout << endl;
        }
         
        
    }
    day_counter = 1;
    mouth++;
    cout << endl;

         }
         else if(mouth == 4 || mouth == 6 || mouth ==9 || mouth == 11){

         cout << setw(10) << "Monday"
         << setw(10) << "Tuesday"
         << setw(10) << "Wednesday"
         << setw(10) << "Thursday"
         << setw(10) << "Friday"
         << setw(10) << "Saturday"
         << setw(10) << "Sunday" << endl;

         cout << setw(day * num_space - 9) << "";

              while (day_counter <= 30)
    {

       
        cout << setw(num_space) << day_counter;

        day++;
        day_counter++;

        if (day > 7)
        {
            day = 1;
        }

        
        if (day == 1)
        {
            cout << endl;
        }
         
        
    }
    day_counter = 1;
    mouth++;
    cout << endl;
    
         }
         else if(mouth == 1 || mouth == 3 || mouth == 5 || mouth == 7 ||  mouth == 8 ||  mouth == 10  || mouth == 12  ){
        cout << setw(10) << "Monday"
         << setw(10) << "Tuesday"
         << setw(10) << "Wednesday"
         << setw(10) << "Thursday"
         << setw(10) << "Friday"
         << setw(10) << "Saturday"
         << setw(10) << "Sunday" << endl;

         cout << setw(day * num_space - 9) << "";

            while (day_counter <= 31)
    {
    
       
        cout << setw(num_space) << day_counter;

        day++;
        day_counter++;

        if (day > 7)
        {
            day = 1;
        }

        
        if (day == 1)
        {
            cout << endl;
        }
         
        
    }
    day_counter = 1;
    mouth++;
    cout << endl;
         }
    cout << endl;
        x++;
         }
}
cout << endl;
    }
   
    


   

    
