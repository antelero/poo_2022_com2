#include "gasto_extraordinario.h"

gasto_extraordinario::gasto_extraordinario(char *descrExtra)
{
    this->descrExtra=descrExtra;

}
char *gasto_extraordinario::descripcion()
{
    return  this->descrExtra;
}
