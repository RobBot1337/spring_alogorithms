#include "findindex.hpp"
#include <vector>

int FindIndex(int size, std::vector<int> binar_numbers){
    for(int i = 0; i < size; ++i){
        if((binar_numbers[i]==0) && (binar_numbers[i+1]==1)){
            return i;
        }
    }
}

