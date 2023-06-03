#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h"

class FloatComplex : public IntComplex {   // Inherits from IntComplex class
private:
    float real;           // Private data member to store the real part of the complex number (floating-point)
    float imaginary;      // Private data member to store the imaginary part of the complex number (floating-point)

public:
    FloatComplex(float real = 0.0f, float imaginary = 0.0f);  // Constructor to initialize the complex number (floating-point)

    FloatComplex operator+(const FloatComplex& other) const;  // Overloaded operator '+' for addition (floating-point)
    FloatComplex operator-(const FloatComplex& other) const;  // Overloaded operator '-' for subtraction (floating-point)
    FloatComplex operator*(const FloatComplex& other) const;  // Overloaded operator '*' for multiplication (floating-point)
    FloatComplex operator/(const FloatComplex& other) const;  // Overloaded operator '/' for division (floating-point)

    float getReal() const;        // Getter function to retrieve the real part of the complex number (floating-point)
    float getImaginary() const;   // Getter function to retrieve the imaginary part of the complex number (floating-point)
};

#endif  // FLOATCOMPLEX_H
