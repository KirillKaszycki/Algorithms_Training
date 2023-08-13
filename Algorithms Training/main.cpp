#include <iostream>
#include <algorithm>
#include "BinarySearch.h"
#include "Fibonacci.h"


template<class ForwardIt, class T, class Compare>
[[maybe_unused]] bool binary_search(ForwardIt first, ForwardIt last, const T& value, Compare comp)
{
    first = std::lower_bound(first, last, value, comp);
    return (first != last and !(comp(value, *first)));
}

int main(){
    std::cout << Fibonacci::get(10) << std::endl;

    BinarySearch::get();
    return 0;
}
