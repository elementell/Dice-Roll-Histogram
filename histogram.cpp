#include "histogram.h"
#include <cstdlib>
void printHistogram(uint* rolls) {
    for(int i= 2; i < 13; i++) {
        std::cout << std::setw(2) << i << " | ";
        for(int q = 0; q < rolls[i-2]; q++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
