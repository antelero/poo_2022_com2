#include "gasto_compra.h"

Gasto_Compra::Gasto_Compra(char *descrProducto)
{
    this->descrProducto=descrProducto;
}

char *Gasto_Compra::descripcion()
{
    return this->descrProducto;
}
