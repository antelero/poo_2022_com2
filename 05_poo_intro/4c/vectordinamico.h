#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H
#include <iostream>
using namespace std;

class VectorDinamico{
private:
    int *vec = new (int);
    int size;
public:
    VectorDinamico(int *vec, int size);
    int find(int);
    void add(int);
    void remove(int);
    float avg();
    int max();
    int min();
    const string toString();
    int getSize() const;
};

#endif // VECTORDINAMICO_H
