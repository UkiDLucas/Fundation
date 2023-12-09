/**
 * Number.h
 * @authors: @UkiDLucas
*/
#include <string>
#include <iostream>



class Number 
{
    public:
        
        // Number( Number anotherNumber )
        // {
        //     value = anotherNumber.getValue();
        // }

        Number(int value)
        {
            valueDouble = value;
        }

        Number(float value)
        {
            valueDouble = value;
        }

        Number(double value){
            valueDouble = value;
        }

        Number(std::string value)
        {
            valueDouble = std::stod(value);
        }

        // Getters and Setters

        int getValue()
        {
            return valueDouble;
        }

        // Convenience Methods
        Number add( Number otherNumber)
        {
            valueDouble += otherNumber.getValue();
            return *this; // return the current object
        }

        Number assign( Number otherNumber)
        {
            valueDouble = otherNumber.getValue();
            return *this; // return the current object
        }

        bool isPrime(int value);
        bool isInteger(int value);
        bool isDecimal(int value);
        bool isEven(int value);
        bool isOdd(int value);
        bool isPositive(int value);
        bool isNegative(int value);
        bool isZero(int value);
        bool isDivisibleBy(int value);
        bool nasNoValue();

        void printLine()
        {
            std::cout << valueDouble << std::endl;
        }

    private:    

        double valueDouble = 0.0; // default value because C++ is stupid.
};
