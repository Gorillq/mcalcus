//
// Created by kamilk on 23.01.24.
//

#include "Matrix.h"
#include <iostream>
#include <vector>


void Matrix::input_vector(std::vector<std::vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            std::cout << "Element: " << i << j << std::endl;
            std::cin >> Matrix::element;
            v[i][j] = Matrix::element;
        }
    }
}
void Matrix::print_vector(const std::vector<std::vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void Matrix::resizer(std::vector<std::vector<int>>& v, int& msize) {
    v.resize(msize);
    for (auto & i : v) {
        i.resize(msize);
    }
}
