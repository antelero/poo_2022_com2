#include <iostream>
using namespace std;

template <class T>  //identificador de tipo: T
class Coordenada{
private:
  T x; //atributos de tipo T
  T y;

public:
  Coordenada(T x=0, T y=0); //parámetros de tipo T
  T dameX(){return x;};
  T dameY(){return y;};      //retorna un tipo T
  void nuevoX(T x){this -> x = x;};
  void nuevoY(T y){this -> y = y;};
};
template <class T>
Coordenada<T>::Coordenada(T x, T y){
  this -> x = x;
  this -> y = y;
}


int main()
{
    // Una coordenada de enteros
    Coordenada <int> c1(1,2);
    std::cout << c1.dameX() << " - " << c1.dameY() << std::endl;
    // Una coordenada de reales
    Coordenada <float> c2(1.5, 0.5);
    std::cout << c2.dameX() << " - " << c2.dameY() << std::endl;
    return 0;
};
