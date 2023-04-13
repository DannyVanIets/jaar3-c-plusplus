#include <iostream>

#include "Distance.h"  // <-- to be created by you

int main(int argc, char** argv)
{
	// There are 14 roede in 1 voets.
    Distance d1(1, 7);
    Distance d2(3, 10);

    // Exercise a
    std::cout << "Exercise a: d1=" << d1 << ", d2=" << d2 << std::endl;

    // Exercise b
    d1 += d2;
    std::cout << "Exercise b: d1=" << d1 << ", d2=" << d2 << std::endl; // Should be 5,3 and 3, 10

    // Exercise c
    d1 = Distance(1, 7);
    d2 = Distance(3, 10);
    Distance d3 = Distance(1, 7) + Distance(3, 10);
    Distance d4 = Distance(2, 7) + Distance(3, 7);
    Distance d5 = Distance(2, 7) + Distance(3, 6);
    std::cout << "Exercise c: d1=" << d1 << ", d2=" << d2 << ", d3=" << d3 << ", d4=" << d4 << ", d5=" << d5 << std::endl;

    return 0;
}
