#ifndef MACHINE_LEARNING_BINARYSEARCH_H
#define MACHINE_LEARNING_BINARYSEARCH_H

#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>

class BinarySearch final{
public:
    static void get(){
        std::vector<int> haystack {1, 3, 4, 5, 9};
        std::vector<int> needles {1, 2, 3};

        for(auto needle : needles){
            std::cout << "Searching for " << needle << '\n';
            if(std::binary_search(haystack.begin(), haystack.end(), needle)){
                std::cout << "Found " << needle << '\n';
            }else{
                std::cout << "no dice\n";
            }
        }
    }
};


#endif
