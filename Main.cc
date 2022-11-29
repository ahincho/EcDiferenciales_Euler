
# include "Calculadora.h"
# include <stdio.h>

/*
    Bibliografia:
    - https://youtu.be/V6wLYLvqZ84
    - https://youtu.be/PXdjSYPYLZ4
    - https://youtu.be/jy9guAqutIM
    - https://youtu.be/98pN37CP_Dc
    - https://youtu.be/WolwH55rveQ
    - https://youtu.be/bwlPJXH1ZV8
    - https://youtu.be/ihnvDvg0SP0
*/

int main() {
    Calculadora cal;
    double x0 = 1.0f, h = 0.001f, xf = 3.0f, y0 = 3.0f, dy0 = -1.0f;
    double d2y0 = cal.segundaDerivada(x0, y0, dy0);
    double yp = cal.metodoEuler(x0, h, xf, y0, dy0, d2y0);
    printf("Solucion Particular de Y: %.6f\n", yp);
    double y = cal.solucionGeneral(yp, xf);
    printf("Solucion General de Y: %.6f\n", y);
}
