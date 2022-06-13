
//QT todas las clases comienzan con la letra Q en mayúscula.
#include <QApplication>
#include <QLabel>

https://github.com/antelero/poo_2022_com2

int main(int argc, char *argv[])
{
    //creamos la aplicación qt y le pasamos como parámetro, los parámetros de main dado que la aplicación
    //se puede ejecutar desde la linea de comandos con algún parámetro
    QApplication app(argc, argv);

    //Se crea el widget QLabel el cual muestra “Hello Qt!”
    QLabel *label = new QLabel("Hello Qt!");

    // Se pone en visible el componente, dado que todos los componentes nacen invisibles
    label->show();

    //pasa el control de la aplicación a Qt. En este punto, el programa entra en el bucle de eventos.
    return app.exec();
}
