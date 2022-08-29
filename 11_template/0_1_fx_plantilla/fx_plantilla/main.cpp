#include <iostream>
using namespace std;

template <class T>
T mayor(T dato1, T dato2){
    return (dato1 > dato2 ? dato1 : dato2);
}

template <class tipo1, class tipo2>
    tipo1 mayor(tipo1 dato1, tipo2 dato2){
    return (dato1 > dato2 ? dato1 : dato2);
}

int main(int argc, char *argv[]) {
        int a = 1, b = 2, n;
        float c = 1.0, d = 0.5, m;

        n = mayor <int> (a,b); // Usando enteros
        m = mayor(c,d);        // Usando reales

        cout << "Entero mayor: " << n << endl;
        cout << "Real mayor: " << m << endl;


        int aa = 10;
        float bb = 1.0;
        float cc = mayor(bb,aa); // como el primer argumento es un float, el resultado también lo es
        cout << "Mayor Entero y real usando la segunda definicion: " << cc << endl;
        return 0;

}
