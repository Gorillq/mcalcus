#include <iostream>
#include <vector>

void input_vector(std::vector<std::vector<int>>& v) {
    for (int i = 0;i < v.size();i++) {
        for (int j = 0; j < v.size();j++) {
            std::cout << "Element: " << i << j << std::endl;
            int element;
            std::cin >> element;
            v[i][j] = element;
        }
    }
}

void output_vector(const std::vector<std::vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            std::cout << v[i][j] << " ";
        }
    }
}

void print_vector(const std::vector<std::vector<int>>& v) {
    for (int i = 0; i < v.size(); i++ ) {
        for (int j = 0; j < (v.size()); j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void resizer(std::vector<std::vector<int>>& v, int msize) {
    v.resize(msize);
    for (auto & i : v) {
        i.resize(msize);
    }
}

void add_vector(std::vector<std::vector<int>>& v, std::vector<std::vector<int>>& w, std::vector<std::vector<int>>& x) {
    int ad, add;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            ad = v[i][j];
            add = w[i][j];
            auto results = ad + add;
            x[i][j] = results;
        }
    }
}


int main(int argc, char* argv[]) {
    int size;
    std::vector<std::vector<int>> wektor;
    std::vector<std::vector<int>> wektorino;
    std::vector<std::vector<int>> result;
    std::cout << "input number of columns: ";
    std::cin >> size;
//    wektor.resize(size);
//    for (auto & i : wektor) {
//        i.resize(size);
//    }
    resizer(wektor, size);
    resizer(wektorino, size);
    resizer(result, size);
    std::cout << "matrix 1" << std::endl;
    input_vector(wektor);
    std::cout << "matrix 2" << std::endl;
    input_vector(wektorino);
    add_vector(wektor, wektorino, result);
    output_vector(result);
    std::cout << std::endl;
    print_vector(result);
    return 0;
}

/*#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    int size, element;
    std::vector<std::vector<int>> wektor;
    std::cout << "size";
    std::cin >> size;
    wektor.resize(size);
    for (auto & i : wektor) {
        i.resize(size);
    }
    for (int i = 0;i < wektor.size();i++) {
        for (int j = 0; j < wektor.size();j++) {
            std::cout << "Element: " << i << j << std::endl;
            std::cin >> element;
            wektor[i][j] = element;
        }
    }
    for (int i = 0; i < wektor.size(); i++) {
        for (int j = 0; j < wektor.size(); j++) {
            std::cout << wektor[i][j] << " ";
        }
    }
    return 0;
}*/