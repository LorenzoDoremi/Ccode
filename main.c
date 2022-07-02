#include <stdio.h>
#include <stdlib.h>

double power(double n)
{
    return n * n - 10;
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

    /*   int index = 0;
      int* pointeri = &index;
      recursion(nums, pointeri); */

    /*    for(int i = 0; i < 10; i++) {

        printf(" %d \n", nums[i]);
     } */

    double zero = bisection(power, -10.0, 10.0, 100);

    printf(" %d \n", zero);

    return 0;
}

double bisection(double (*f)(double), double l, double r, int steps)
{

    double mid = (l + r) / 2;
    double v = f(mid);

    if (v == 0 || steps == 0)
    {
        return v;
    }
    else if (v * f(l) < 0)
    {
        return bisection(f, l, v, steps - 1);
    }
    else
    {
        return bisection(f, v, r, steps - 1);
    }
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