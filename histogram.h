#include <iostream>
#include <cstdlib>
#include <iomanip>
typedef unsigned int uint;
inline uint rollDie() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}
void printHistogram(uint* rolls);
