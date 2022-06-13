#ifndef GASTO_H
#define GASTO_H

#include <iostream>

class Gasto
{
protected:
    double importe = 0.0;

public:
    Gasto();
    void setImporte(double importe_);
    double getImporte();
    char virtual *descripcion() = 0;

    char * cCat(char *cad1, char *cad2);;
};

#endif // GASTO_H
