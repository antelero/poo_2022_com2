# include <iostream>

using namespace std;

class Forma {
public:
    virtual double area()  = 0;
};

class Triangulo : public Forma {
public:
    double alto, ancho;
    Triangulo(double alto, double ancho) : alto(alto), ancho(ancho) {}
    double area()  {
        return (alto * ancho) / 2;
    }
};

class Rectangulo : public Forma {
public:
    double alto, ancho;
    Rectangulo(double alto, double ancho) : alto(alto), ancho(ancho) {}
    double area() {
        return alto * ancho;
    }
};

class Circulo : public Forma {
public:
    double r;
    Circulo(double r) : r(r) {}
    double area() {
        return (r*r*3.1416);
    }
};

Forma* formas[4] = { new Triangulo(2, 1),  new Rectangulo(3, 2) ,new Rectangulo(5, 2),new Circulo(5) };

double* show(Forma** formas) {
    double* arr = new double[4];
    for (int i = 0; i < 4; i++) {
        arr[i] = formas[i]->area();
        delete formas[i];    //free the object pointed in shapes[]
    }
    return arr;
}

int main() {
    double* arr = show(formas);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    delete[] arr;
}
