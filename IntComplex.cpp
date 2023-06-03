#include "IntComplex.h"

IntComplex::IntComplex(int real, int imaginary)
    : real(real), imaginary(imaginary) {}   // Constructor implementation to initialize the complex number

IntComplex IntComplex::operator+(const IntComplex& other) const {
    return IntComplex(real + other.real, imaginary + other.imaginary);   // Addition of two complex numbers
}

IntComplex IntComplex::operator-(const IntComplex& other) const {
    return IntComplex(real - other.real, imaginary - other.imaginary);   // Subtraction of two complex numbers
}

IntComplex IntComplex::operator*(const IntComplex& other) const {
    int newReal = real * other.real - imaginary * other.imaginary;       // Multiplication of two complex numbers (real part)
    int newImaginary = real * other.imaginary + imaginary * other.real;  // Multiplication of two complex numbers (imaginary part)
    return IntComplex(newReal, newImaginary);
}

IntComplex IntComplex::operator/(const IntComplex& other) const {
    int divisor = other.real * other.real + other.imaginary * other.imaginary;  // Divisor for division
    int newReal = (real * other.real + imaginary * other.imaginary) / divisor;  // Division of two complex numbers (real part)
    int newImaginary = (imaginary * other.real - real * other.imaginary) / divisor;  // Division of two complex numbers (imaginary part)
    return IntComplex(newReal, newImaginary);
}

int IntComplex::getReal() const {
    return real;   // Getter function to retrieve the real part of the complex number
}

int IntComplex::getImaginary() const {
    return imaginary;   // Getter function to retrieve the imaginary part of the complex number
}
