#include <iostream>
#include <gasto.h>
#include <gasto_compra.h>
#include <gasto_extraordinario.h>
#include <gasto_servicio.h>
#include <gestorgasto.h>
using namespace std;

int main()
{

    gestorgasto* lis = new gestorgasto();

    Gasto_Compra *gc= new Gasto_Compra("Gasto por compra de productos de limpieza");
    gc->setImporte(1500);
    Gasto_Compra *gc1= new Gasto_Compra("Gasto por compra de productos de orden");
    gc1->setImporte(700);

    gasto_extraordinario *gce= new gasto_extraordinario("Gasto Extraordinario por compra de focos");
    gce->setImporte(500);

    gasto_servicio *gs=new gasto_servicio("Gasto por servicio de cerrajeria");
    gs->setImporte(100);

    lis->addGasto(gc);
    lis->addGasto(gc1);
    lis->addGasto(gce);
    lis->addGasto(gs);
    int cantidad = lis->getCantidad();
    Gasto * gPtr;
    for(int i=0;i<cantidad;i++){
        cout <<  i << " " << lis->getGasto(i)->descripcion()<< " " <<  lis->getGasto(i)->getImporte()<< endl;
        gPtr = lis->getGasto(i);
        //gPtr = (g->getObjeto(i))->;
        cout<<  i << " - " << (gPtr->descripcion())<< endl;//area() <<endl;
     };
    return 0;
}
