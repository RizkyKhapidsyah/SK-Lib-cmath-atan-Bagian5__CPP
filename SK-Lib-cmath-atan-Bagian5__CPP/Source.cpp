#include <iostream>
#include <cmath>
#include <conio.h>

/*  Source by CPPReferences
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019
*/

int main() {
    std::cout << "atan(1) = " << atan(1) << " 4*atan(1) = " << 4 * atan(1) << '\n';
    // special values
    std::cout << "atan(Inf) = " << atan(INFINITY)
        << " 2*atan(Inf) = " << 2 * atan(INFINITY) << '\n'
        << "atan(-0.0) = " << atan(-0.0) << '\n'
        << "atan(+0.0) = " << atan(0) << '\n';

    _getch();
    return 0;
}