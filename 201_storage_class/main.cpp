/*
 * Storage Class in C++
 *
 * A storage class defines the scope (visibility) and life-time
 * of variables and/or functions within a C++ Program.
 *
 * These specifiers precede the type that they modify. There are
 * following storage classes, which can be used in a C++ Program
 *
 *  - auto
 *  - register
 *  - static
 *  - extern
 *  - mutable
 *
 */
#include <iostream>

using namespace std;

/*
 * The Auto Storage Class
 *
 * The auto storage class is the default storage class for all local varialbes
 *
 */
{
    int mount;
    auto int mounth;
}

/*
 * The register Storage Class
 *
 * The register storage class is used to define local variables that should
 * stored in a register instead of RAM.
 *
 * This means that the variable has a maximum size equal to the register
 * size (usually one word).
 * AND
 * can't have the unary '&' operator applied to it.
 * Because - it does not have a memory location
 *
 * The regiester class should only be used for variables that require
 * quick access such as counters.
 *
 * It should also be noted that defining 'register' does not mean
 * that the variable will be stored in a register.
 * It means IT MIGHT be sotred in a regiester depending
 */
{
    register int miles;
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}