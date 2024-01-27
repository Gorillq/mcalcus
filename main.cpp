#include <iostream>
#include "matrix.h"
#include "vectormat.h"

int main(int argc, char* argv[]) {
    int x, y;
    matrix object;
    Vectormat obj2;
    std::cout << "columns numbers input: ";
    std::cin >> object.msize;
    object.resizer(object.v, object.msize);
    object.resizer(object.w, object.msize);
    object.resizer(obj2.b, object.msize);
    std::cout << "1.Determinant" << std::endl << "2.Equations" << std::endl;
    std::cin >> y;
    switch (y) {
        default:
            return 1;
        case 1:
            object.input_vector(object.v);
            obj2.detereq(object.v);
            return 0;
        case 2:
            break;
    }
    std::cout << "matrix 1: " << std::endl;
    object.input_vector(object.v);
    std::cout << "matrix 2: " << std::endl;
    object.input_vector(object.w);
    std::cout << "1.Add" << std::endl << "2.Subtract" << std::endl << "3.Mnozenie" << std::endl;
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
        case 3:
            obj2.iloraz(object.v, object.w, obj2.b);
            break;
    }
    object.print_vector(obj2.b);
    return 0;
}
