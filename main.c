#include <stdio.h>
#include <stdlib.h>

double power(double n)
{
    return n * n - 10;
}

double editPointer(double* a) {
    *a = *a**a;
}
int main()
{
    // printf() displays the string inside quotation
    int nums[10];
    for (int i = 0; i < 10; i++)
    {

        nums[i] = rand() % 100;
    }
  /*   selectionSort(nums); */
     double n = 5.0;
     double* pointer = &n;
     editPointer(pointer);
     printf("%f", n);

    return 0;
}



void selectionSort(int *array)
{

    for (int i = 0; i < 10; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {

            // pointer method
            /* if(*(array+j) < *(array+i)) {
                 int t = *(array+i);
                 *(array+i) = *(array+j);
                 *(array+j) = t;
             }

             */

            if (array[j] < array[i])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
}

// recursively set all values of an array to 0
void recursion(int *array, int *index)
{

    if (*index < 10)
    {
        array[*index] = 0;
        *index += 1;
        printf("index = %d", index);
        recursion(array, index);
    }
}