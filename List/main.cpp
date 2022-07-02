#include <iostream>
#include "Order.cpp"
using namespace std;
int main() {

    int array [] = {5,7,1,3,2,6,8,7,456,3,2,23,1,9,10,0,4,5};
    int l = sizeof(array) / sizeof(int);
  //  cout << l;
 //   cout << "- \n";
  //  minSorting(array, l);
  /*    maxSorting(array, l);
    for(int i = 0; i < l; i++ ) {
       cout << array[i];
       cout << "-";
    }

    return 0;

    */
 
      for(int k = 1; k < 10; k++) {
         int m = Fibo(k);
         cout << m;
         cout << "-";
      };
 
 

}