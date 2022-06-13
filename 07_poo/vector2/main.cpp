#include <iostream>
#include <vector>
using namespace std;
//Standard Template Library (STL) es una colección de estructuras de datos genéricas
//                                          y algoritmos escritos en C++
int main()
{
    vector<int> eje;
    eje.push_back(2);
    eje.push_back(3);
    eje.push_back(8);
    for (int i = 0; i < eje.size(); i++) {
        cout << eje[i] << " ";
    }
    eje[0] = 5;
    cout << endl;
    eje.push_back(9);
    for (int i = 0; i < eje.size(); i++) {
        cout << eje[i] << " ";
    }

    return 0;
}
