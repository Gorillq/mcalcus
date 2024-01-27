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
    void Vectormat::defi(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w,
                         std::vector<std::vector<int>>& b) {
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(); j++) {
                ad = v[i][j];
                add = w[i][j];
                result = ad - add;
                b[i][j] = result;
            }
        }
    }
    void Vectormat::iloraz(std::vector<std::vector<int>> &v, std::vector<std::vector<int>> &w,
                           std::vector<std::vector<int>> &b) {
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 0;j < v.size(); ++j) {
               for (int k = 0; k < v.size(); ++k) {
                   b[i][j] += v[i][k] * w[k][j];
               }
            }
        }
    }
    void Vectormat::detereq(std::vector<std::vector<int>> &v) {
        for (int k = 0; k < v.size() - 1; k++) {
            double sign = 1;
            //Pivot - row swap needed
            if (v[k][k] == 0) {
                int m = 0;
                for (m = k + 1; m < v.size(); m++) {
                    if (v[m][k] != 0) {
                        swap(v[m], v[k]);
                        sign = -sign;
                        break;
                    }
                }

                if (m == v.size()) {
                    break;
                }
            }

                for (int i = k + 1; i < v.size(); i++) {
                    for (int j = k + 1; j < v.size(); j++) {
                        v[i][j] = v[k][k] * v[i][j] - v[i][k] * v[k][j];
                        if (k != 0) {
                            v[i][j] /= v[k - 1][k - 1];
                        }
                    }
                }
            }
            std::cout << "Delta: " << v[(v.size() - 1)][(v.size() - 1)] << std::endl;
            /*catch (...) {
                std::exception_ptr p = std::current_exception();
                std::clog <<(p ? p.__cxa_exception_type()->name() : "null") << std::endl;
                std::cerr << "Fatal error";
            }*/
        }
