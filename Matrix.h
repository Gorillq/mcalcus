//
// Created by kamilk on 23.01.24.
//

#ifndef MCALC_MATRIX_H
#define MCALC_MATRIX_H

#include <vector>

class Matrix {
public:
    int msize;
    std::vector<std::vector<int>> v;
    std::vector<std::vector<int>> w;
    void input_vector(std::vector <std::vector<int>>& v);
    void print_vector(const std::vector <std::vector<int>>& v);
    void resizer(std::vector <std::vector<int>>& v, int& msize);

private:
    int element;
};

#endif //MCALC_MATRIX_H
