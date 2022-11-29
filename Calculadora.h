
# ifndef CALCULADORA_H
# define CALCULADORA_H

class Calculadora
{
    public:
        Calculadora() { };
        double funcionF(double x);
        double segundaDerivada(double x, double y, double dy);
        double metodoEuler(double x0, double h, double xf, double y0, double dy0, double d2y0);
        double solucionGeneral(double yp, double xf);
    private:
        void printInfo(int i, double x, double y, double dy, double d2y);
};

# endif
