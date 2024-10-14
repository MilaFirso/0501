#include <iostream>
#include <cmath>
#include <vector>

template<class T>
T square(T& number1) {
    return pow(number1, 2);
}

template<class V>
void square(std::vector<V>& vect) {
    for (V& elem : vect) {
        elem *= elem;
    }
}

template<typename V>
void print_vector(std::vector<V>& vect) {
    for (size_t i = 0; i < vect.size(); i++) {
        if (i == (vect.size() - 1)) {
            std::cout << vect[i];
        }
        else std::cout << vect[i] << ", ";
    };
}
int main() {
    setlocale(LC_ALL, "rus");
    auto number1 = 0;
    std::vector<int> vect{ -1,4,8 };
    std::cout << "[IN]: ";
    std::cin >> number1;
    std::cout << "[OUT]: " << square(number1) << "\n";
    std::cout << "[IN]: ";
    print_vector(vect);
    std::cout << std::endl;
    std::cout << "[OUT]: ";
    square(vect);
    print_vector(vect);
    return 0;
}