#ifndef GASTO_SERVICIO_H
#define GASTO_SERVICIO_H
#include <gasto.h>

class gasto_servicio:public Gasto
{
    char * descrServ = 0;
public:
    gasto_servicio(char * descrServ);
    char *descripcion();
};

#endif // GASTO_SERVICIO_H
