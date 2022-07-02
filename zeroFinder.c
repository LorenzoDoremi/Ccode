#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double power(double x)
{
    return x * x * x + 5;
}

double bisection(double (*f)(double),  double min, double max, int iteractions)
{

    

    double mid = (max + min) / 2;
   
    
    if (iteractions > 0 && f(mid) != 0)
    {
        if (f(min) * f(mid) < 0)
        {

            return bisection(f,min, mid, iteractions -1);
        }
        else
        {
            return bisection(f, mid, max, iteractions -1);
        }
    }

    return mid;
}



// calcolo ricorsivo per l'approssimazione zero di una funzione tramite corde (regula Falsi)
double regulaFalsi(double (f)(double), double a, double b, double interactions) {

    
    double min = a;
   
    double max = b;
  
    // calcolo coefficiente angolare retta passante.  fabs vs abs
    double coeff = ((f)(max) - (f)(min))/((max-min)); 
 
    double mid = min+fabs((f)(min)/coeff);
  

    if((f)(mid) == 0 || interactions == 0) {
       return mid;
    }
    // cerco corda a sinistra
    else if((f)(min)*(f)(mid) < 0) {
  
      return regulaFalsi(f,min,mid, interactions-1);
   }
   // altrimenti a destra
   else {
   //
    return regulaFalsi(f,mid,max, interactions-1);
   }


}

int main()
{

    double k = bisection(power, -5, 5, 5);
    double x = regulaFalsi(power, -5, 5, 5);
    printf(" %f \n", k);
    printf(" %f \n", x);


    return 0;
}