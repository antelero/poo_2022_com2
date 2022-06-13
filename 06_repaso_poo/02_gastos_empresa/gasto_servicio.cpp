#include "gasto_servicio.h"

gasto_servicio::gasto_servicio(char *descrServ)
{
    this->descrServ=descrServ;

}


char *gasto_servicio::descripcion()
{
   return  this->descrServ;
}
