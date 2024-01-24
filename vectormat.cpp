//
// Created by kamilk on 24.01.24.
//
#include<iostream>
#include<vector>
#include "vectormat.h"



    std::vector<std::vector<int>> b;
    void Vectormat::ader(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w, std::vector<std::vector<int>>& b) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(); j++) {
                ad = v[i][j];
                add = w[i][j];
                result = ad + add;
                b[i][j] = result;
            }
        }
    }
    void Vectormat::defi(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w, std::vector<std::vector<int>>& b) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(); j++) {
                ad = v[i][j];
                add = w[i][j];
                result = ad - add;
                b[i][j] = result;
            }
        }
    }