/**
 * Number.h
 * @authors: @UkiDLucas
*/
#include <string>
#include <iostream>

class Number 
{
    public:
        // // Macro to add class name to the class
        // #define ADD_CLASS_NAME(class_name)  
        // public:                             
        //     const char *getName()           
        //     {                               
        //         return #class_name;         
        //     }                                      
        
        /** cannot take itself as a type */
        // Number( Number anotherNumber )
        // {
        //     value = anotherNumber.getValue();
        // }

        Number(int value)
        {
            valueDouble = value;
            name = __func__;
        }

        Number(float value)
        {
            valueDouble = value;
            name = __func__;
        }

        Number(double value){
            valueDouble = value;
            name = __func__;
        }

        Number(std::string value)
        {
            valueDouble = std::stod(value);
            name = __func__;
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

        /**
         * https://stackoverflow.com/questions/77632879/how-can-i-get-the-class-instance-name-inside-c-object
        */
        void printLine()
        {
            std::cout << name << " value is " << valueDouble << std::endl;
        }

    private:    

        double valueDouble = 0.0; // default value because C++ is stupid.
        const char* name = "undefined"; // name of the class instance
};
