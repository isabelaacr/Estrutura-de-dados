#include <stdio.h>
#include <math.h>

int main ()
{
    double a, b, c;
    printf ("Entre com os coeficientes (a,b,c): ");
    scanf ("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0.0) {
        double x = -c / b;
        printf ("Uma raiz real.  %f\n", x);
    }
    else {
        double delta = b*b - 4*a*c;
        if (delta < 0) {
            printf ("Raizes reais inexistentes. \n");
        }
        else if (delta == 0.0) {
            double x = -b / (2*a);
            printf ("Uma raiz real: %f\n", x);
        }
        else {
            delta = sqrt (delta);
            double x1 = (-b + delta) / (2*a);
            double x2 = (-b - delta) / (2*a);
            printf ("Duas raízes reais: %f %f\n", x1, x2);
        }
    }
    return 0;
}
