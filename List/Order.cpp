#include <iostream>

using namespace std;
void minSorting(int array[], int length)
{

  
   
     int l = sizeof(array) / sizeof(int);
     cout << l;
    
    for (int i = 0; i < length; i++)
    {

        for (int j = i + 1; j < length; j++)
        {

            if (array[j] < array[i])
            {

                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void maxSorting(int array[], int length)
{

  
   
 
    
    for (int i = length-1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (array[j] > array[i])
            {

                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int Fibo(int i) {
    

    if( i == 1 ) return 0;
    if( i == 2) return 1; 
    else return Fibo(i-1) + Fibo(i-2);
}