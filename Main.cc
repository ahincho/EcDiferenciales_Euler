
# include "Calculadora.h"
# include <stdio.h>

int main() {
    Calculadora cal;
    double x0 = 1.0f, h = 0.001f, xf = 3.0f, y0 = 3.0f, dy0 = -1.0f;
    double d2y0 = cal.segundaDerivada(x0, y0, dy0);
    double yp = cal.metodoEuler(x0, h, xf, y0, dy0, d2y0);
    double y = cal.solucionGeneral(yp, xf);
    printf("Valor de y: %.6f\n", y);
}
