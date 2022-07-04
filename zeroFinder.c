#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double power(double x)
{
    return x * x * x + 5;
}

double bisection(double (*f)(double), double min, double max, int iteractions)
{

    double mid = (max + min) / 2;

    if (iteractions > 0 && f(mid) != 0)
    {
        if (f(min) * f(mid) < 0)
        {

            return bisection(f, min, mid, iteractions - 1);
        }
        else
        {
            return bisection(f, mid, max, iteractions - 1);
        }
    }

    return mid;
}

// calcolo ricorsivo per l'approssimazione zero di una funzione tramite corde (regula Falsi)
// quando non funziona? cosa potrebbe succedere?
double regulaFalsi(double(f)(double), double a, double b, double interactions)
{

    double min = a;

    double max = b;

    // calcolo coefficiente angolare retta passante.  fabs vs abs
    double coeff = ((f)(max) - (f)(min)) / ((max - min));

    double mid = min + fabs((f)(min) / coeff);

    if ((f)(mid) == 0 || interactions == 0)
    {
        return mid;
    }
    // cerco corda a sinistra
    else if ((f)(min) * (f)(mid) < 0)
    {

        return regulaFalsi(f, min, mid, interactions - 1);
    }
    // altrimenti a destra
    else
    {
        //
        return regulaFalsi(f, mid, max, interactions - 1);
    }
}

// quando non funziona? quale problema potrebbe scaturire? 
double newtonRaphson(double(f)(double), double min, double max, int iteractions)
{

    double xi = max;

    while ( iteractions > 0 )
    {
        double coeff = (f(xi) - f(xi - 0.1)) / (xi - (xi - 0.1));
        xi -= fabs(f(xi) / coeff);
        printf(" %f \n", coeff);
     
        if(fabs(f(xi)) < 0.01) {

           
            return xi;
        }
        iteractions--;
    }

    return xi;
}

int main()
{

    double k = bisection(power, -5, 5, 100);
    double x = regulaFalsi(power, -2, 5, 100);
    double y = newtonRaphson(power, -3, 0, 100);
    printf(" %f \n", k);
    printf(" %f \n", x);
    printf(" %f \n", y);

    return 0;
}