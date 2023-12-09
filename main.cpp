/**
 * @file main.cpp
 * @authors: @UkiDLucas
 * @date: 2023-12-09
*/
#include <iostream>
#include "Number.h"


int main() 
{

    // Greek alpha
    Number α{1}; α.printLine(); // C++11 assignment

    // Greek beta
    Number β(2.0); β.printLine(); // C assgnement 

    // Greek gamma
    Number γ("3.0"); γ.printLine();

    // Greek delta
    Number δ = α.add(β.getValue() ); δ.printLine();

    // Greek epsilon
    Number ε = δ.add( γ.getValue() ); ε.printLine();

    // Greek zeta
    Number ζ = ε.assign(δ); ζ.printLine();

    return 0; // correct execution
}
