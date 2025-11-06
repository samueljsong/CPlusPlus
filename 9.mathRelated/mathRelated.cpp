#include <iostream>
#include <cmath>

int main() {

    double x = 3;
    double y = 4;
    double maxNumber;
    double minNumber;

    maxNumber = std::max(x, y);     // will get the max out of the 2 numbers
    minNumber = std::min(x, y);

    // In the cmath header file
    double powerNumber;
    double squareRootNumber;
    double absoluteValue;
    double roundedNumber;
    double ceilNumber;
    double floorNumber;

    powerNumber      = pow(2, 3);        // 2^3
    squareRootNumber = sqrt(9);
    absoluteValue    = abs(-10);
    roundedNumber    = round(10.5);
    ceilNumber       = ceil(10.5);
    floorNumber      = floor(10.5);

    return 0;
}