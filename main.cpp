#include <iostream>
#include "matrix.h"
#include "vectormat.h"

int main(int argc, char* argv[]) {
    int x;
    matrix object;
    Vectormat obj2;
    std::cout << "columns numbers input: ";
    std::cin >> object.msize;
    object.resizer(object.v, object.msize);
    object.resizer(object.w, object.msize);
    object.resizer(obj2.b, object.msize);
    std::cout << "matrix 1: " << std::endl;
    object.input_vector(object.v);
    std::cout << "matrix 2: " << std::endl;
    object.input_vector(object.w);
<<<<<<< HEAD
    std::cout << "1.Add" << std::endl << "2.Subtract" << std::endl;
=======
    std::cout << "1.Add" << std::endl << "2.Subtract" << std::endl << "Mnozenie" << std::endl;
>>>>>>> ef75833 (:ambulance: Critical hotfix.)
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
