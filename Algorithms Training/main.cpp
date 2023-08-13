#include <iostream>
#include <list>

__attribute__((unused)) int matrix_creation(const int n){

    std::list<int> matrix;

    int number;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            std::cin >> number;
            matrix.push_back(number);
        }
    }
    std::cout << &matrix;
    return 0;
}

std::list<int> vector_creation(int n){
    std::list<int> vector;
    int number;
    for(int i = 0; i < n; i++){
        std::cin >> number;
        vector.push_back(number);
    }
    std::cout << &vector << std::endl;
    return vector;
}

int main(){
    std::list<int> vector_ = vector_creation(5);
    std::cout << &vector_ << std::endl;
    return 0;
}
