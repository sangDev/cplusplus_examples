#include <iostream>

// const
//  - A compile time constraint that an object can not be modified

int main() {
    const int i = 9;
    // enforces the constant during compile time
    //i = 6;

    const int *pi = &i;     // data is const, pointer is not
    pi++;

    int* const p2;  // p2 is constant - but data is not constant
    p2 = 0;

    const int* const p3; // data and pointer are both const

    p4 = 0;

    int const *p4 = &i;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}