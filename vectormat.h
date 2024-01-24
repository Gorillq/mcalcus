//
// Created by kamilk on 24.01.24.
//

#ifndef MCALC_VECTORMAT_H
#define MCALC_VECTORMAT_H

#include<iostream>
#include<vector>


class Vectormat {
private:
    int ad, add, result;
public:
    std::vector<std::vector<int>> b;
    void ader(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w, std::vector<std::vector<int>>& b);
    void defi(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w, std::vector<std::vector<int>>& b);
    };// gorila

#endif //MCALC_VECTORMAT_H
