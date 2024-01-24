#include <iostream>
#include "Matrix.h"
#include "vectormat.h"

int main(int argc, char* argv[]) {
    int x;
    Matrix object;
    Vectormat obj2;
    std::cout << "columns numbers input: ";
    std::cin >> object.msize;
    object.resizer(object.v, object.msize);
    object.resizer(object.w, object.msize);
    object.resizer(obj2.b, object.msize);
    std::cout << "Matrix 1: " << std::endl;
    object.input_vector(object.v);
    std::cout << "Matrix 2: " << std::endl;
    object.input_vector(object.w);
    std::cout << "1.Dodawanie" << std::endl << "2.Odejmowanie" << std::endl;
    std::cin >> x;
    switch (x) {
        default:
            std::cout << "404";
            return 1;
        case 1:
            obj2.ader(object.v, object.w, obj2.b);
            break;
        case 2:
            obj2.defi(object.v, object.w, obj2.b);
            break;
    }
    object.print_vector(obj2.b);
    return 0;
}