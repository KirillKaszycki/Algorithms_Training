#include <cassert>
#include <iostream>
#include <algorithm>


#ifndef MACHINE_LEARNING_EUCLIDEANALGORITHM_H
#define MACHINE_LEARNING_EUCLIDEANALGORITHM_H


class EuclideanAlgorithm {
    public:
    static int euclidean_algorithm(int a, int b){
        assert(a > 0 && b > 0);

        int current_gcd = 1;
        for(int d = 2; d <= a && d <= b; d++){
            if(a % d == 0 && b % d == 0){
                if(d > current_gcd){
                    current_gcd = d;
                }
            }
        }
        return current_gcd;
    }
};

class EuclideanSimpleAlgorithm {
    public:
    static int euclidean_simple_algorithm(int a, int b){
        assert(a > 0 && b > 0);

        while(b != 0){
            a = b;
            b = a % b;
        }
        return a;
    }
};

class EuclideanFastAlgorithm {
    public:
    static int euclidean_fast_algorithm(int a, int b){
        assert(a > 0 && b > 0);

        while(a > 0 && b > 0){
            if(a > b){
                a %= b;
            }else{
                b %= a;
            }
        }
        return a == 0 ? b : a;
    }
};


#endif
