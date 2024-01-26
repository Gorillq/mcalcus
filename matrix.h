//
// Created by kamilk on 23.01.24.
//

#ifndef MCALCUS_MATRIX_H
#define MCALCUS_MATRIX_H

#include <vector>

class matrix {
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

#endif //MCALCUS_MATRIX_H
