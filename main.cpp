#include "histogram.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    uint in;
    uint dieRoll;
    uint rollCount[11];
    while(1) {
        for(int p = 0; p < 11; p++) {
            rollCount[p] = 0;
        }
        cout << "Enter the number of dice rolls [0 to quit]: ";
        cin >> in;
        if (in == 0) {
            cout << "Have a nice day." << endl;
            break;
        }
        while (in > 300) {
            cout << "Your number is too large (100-300 is ideal). Try again." << endl;
            cout << "Enter the number of dice rolls [0 to quit]: ";
            cin >> in;
        }
        for(int q = 0; q < in; q++) {
            rollCount[rollDie() - 2]++;
        }
        printHistogram(rollCount);
        cout << endl;

    }
    return 0;
}
