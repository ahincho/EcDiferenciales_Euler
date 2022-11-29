
# include "Calculadora.h"
# include <stdio.h>
# include <math.h>

double Calculadora::funcionF(double x)
{
    // Funcion f(x) = 1 + 2x
    return (1 + 2 * x);
}

double Calculadora::segundaDerivada(double x, double y, double dy)
{
    // Segun Euler : dy/dx = f(x,y)
    // y(i+1) = yi + h*f(xi)
    // Siendo y'' = (x^-1 * y') - (x^-2 * y)
    return pow(x, -1) * dy - pow(x, -2) * y;
}

double Calculadora::metodoEuler(double x0, double h, double xf, double y0, double dy0, double d2y0)
{
    int controlPrint = 0;
    while (x0 <= xf)
    {
        x0 += h;
        y0 += h * dy0;
        dy0 += h * d2y0;
        d2y0 = segundaDerivada(x0, y0, dy0);
        if(controlPrint % 100 == 0)
        {
            printInfo(controlPrint, x0, y0, dy0, d2y0);
        }
        controlPrint++;
    }
    printInfo(controlPrint, x0, y0, dy0, d2y0);
    return y0;
}

double Calculadora::solucionGeneral(double yp, double xf)
{
    // Cuando: a(x)y'' + b(x)y' + c(x)y = f(x)
    // Entonces la solucion general es y = yh + yp
    return yp + funcionF(xf);
}

void Calculadora::printInfo(int i, double x, double y, double dy, double d2y) {
    printf("Iteracion %d\n", i);
    printf("\tValor de x: %.6f\n", x);
    printf("\tValor de y: %.6f\n", y);
    printf("\tValor de y': %.6f\n", dy);
    printf("\tValor de y'': %.6f\n", d2y);
}
