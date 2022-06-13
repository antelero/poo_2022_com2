#ifndef GASTO_EXTRAORDINARIO_H
#define GASTO_EXTRAORDINARIO_H
#include <gasto.h>

class gasto_extraordinario: public Gasto
{
    char * descrExtra = 0;
public:
    gasto_extraordinario(char * descrExtra);
    char *descripcion();
};

#endif // GASTO_EXTRAORDINARIO_H
