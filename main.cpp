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
    Number α{123}; α.printLine(); // C++11 assignment

    // Greek beta
    Number β(123.4); β.printLine(); // C assgnement 

    // Greek gamma
    Number γ("123.45"); γ.printLine();

    // Greek delta
    Number δ = α.add(β.getValue() ); δ.printLine();

    // Greek epsilon
    Number ε = δ.add( γ.getValue() ); ε.printLine();

    // Greek zeta
    Number ζ = ε.assign(δ); ζ.printLine();

    return 0; // correct execution
}
