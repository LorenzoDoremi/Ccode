#include <stdio.h>
#include <stdlib.h>
int main() {
   // printf() displays the string inside quotation
   int nums[10];
   for(int i = 0; i < 10; i++) {

       nums[i] = rand()%100;

   }
   sorting(nums);
     for(int i = 0; i < 10; i++) {

      printf(" %d \n", nums[i]);
   }

   return 0;
}


void sorting(int* array) {

     for(int i = 0; i < 10; i++) {
         
         for(int j = i+1; j < 10; j++) {

            /* if(*(array+j) < *(array+i)) {
                 int t = *(array+i);
                 *(array+i) = *(array+j);
                 *(array+j) = t;
             }

             */

             if(array[j] < array[i]) {
                 int t = array[i];
                 array[i] =array[j];
                 array[j] = t;
             }

         }

     }

}