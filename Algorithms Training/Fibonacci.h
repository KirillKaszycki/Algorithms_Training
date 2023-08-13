#include <cassert>
#include <iostream>
#include <algorithm>

#ifndef MACHINE_LEARNING_FIBONACCI_H
#define MACHINE_LEARNING_FIBONACCI_H


class Fibonacci final{
public:
    static int get(int n){
        assert(n >= 0);
        if(n <= 1){
            return n;
        }
        return get(n - 2) + get(n - 1);
    }
};


#endif
