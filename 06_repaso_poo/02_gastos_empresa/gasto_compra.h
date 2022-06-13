#ifndef GASTO_COMPRA_H
#define GASTO_COMPRA_H
#include <gasto.h>

class Gasto_Compra: public Gasto
{
    char *descrProducto;
public:
    Gasto_Compra(char * descrProducto);

    char *descripcion();
    void setDescrProducto(char*);

};

#endif // GASTO_COMPRA_H
