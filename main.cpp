#include <iostream>
#include <cstdlib>
#include <cmath>



int total_min, total_max;
int count;
char c;

//total_min = total_max = 0;
//count = 0;


//do
//

   const int LENGTH = 10;
   bool empty = true;
   int min. max;

   cout << "Enter a sequence of " << LENGTH << " integer numbers\n";

   for ( int i = 0; i < LENGTH; i++ )
   {
      int number;

      cout << "number " << i + 1 << ": ";
      cin >> number;

      if ( empty )
      {
         min = max = number;
         empty = false;
      }
      else
      {
         if ( number < min ) min = number;
         if ( max < number ) max = number;
      }
   }

   total_min += min;
   total_max += max;
   ++count;

   cout << "Minimum value is " << min
         << ", and maximum value is " << max
         << end;

   cout << "Continue (y/n)? "
   cin >> c;

} while ( c == 'y' || c == 'Y' );

cout << "The average minimum is " << total_min / count
      << ", and the average maximum is " << total_max / count
      << endl;





int main ()
{
    float TotalMin = 0;
    float TotalMax = 0;
    int count;
    char c;
    float number;
    const int LENGTH = 10;
    float min;
    float max;
    int i;

    do
    {
        cout << "Enter a set of 10 numbers\n";

    for (i = 0; i < LENGTH; i++ )
    {
        cout << "number " << i + 1 << ": ";
        cin >> number;

        if (number < min)
            min = number;
        else if (max < number)
            max = number;
    }

    TotalMin += min;
    TotalMax += max;
    count++;

    cout << "The lowest number is " << min << ", and highest number is " << max
         << endl << endl;

    cout << "Continue (y/n)? ";
    cin >> c;

    }while( c == 'y' || c == 'Y' );

    //Set Formatting to 2 Decimal Places
    cout << fixed << showpoint << setprecision(2);

    //Display Averages
    cout << "The low average is  "<< TotalMin / count << ", and the high"
         << " average is " << TotalMax / count << endl << endl;
