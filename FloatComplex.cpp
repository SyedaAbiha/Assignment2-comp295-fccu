#include "FloatComplex.h"

FloatComplex::FloatComplex(float real, float imaginary)
    : IntComplex(static_cast<int>(real), static_cast<int>(imaginary)),   // Call IntComplex constructor to initialize the base class
      real(real),
      imaginary(imaginary) {}   // Constructor implementation to initialize the complex number (floating-point)

FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    return FloatComplex(real + other.real, imaginary + other.imaginary);   // Addition of two complex numbers (floating-point)
}

FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    return FloatComplex(real - other.real, imaginary - other.imaginary);   // Subtraction of two complex numbers (floating-point)
}

FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
    float newReal = real * other.real - imaginary * other.imaginary;       // Multiplication of two complex numbers (real part, floating-point)
    float newImaginary = real * other.imaginary + imaginary * other.real;  // Multiplication of two complex numbers (imaginary part, floating-point)
    return FloatComplex(newReal, newImaginary);
}

FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
    float divisor = other.real * other.real + other.imaginary * other.imaginary;  // Divisor for division (floating-point)
    float newReal = (real * other.real + imaginary * other.imaginary) / divisor;  // Division of two complex numbers (real part, floating-point)
    float newImaginary = (imaginary * other.real - real * other.imaginary) / divisor;  // Division of two complex numbers (imaginary part, floating-point)
    return FloatComplex(newReal, newImaginary);
}

float FloatComplex::getReal() const {
    return real;   // Getter function to retrieve the real part of the complex number (floating-point)
}

float FloatComplex::getImaginary() const {
    return imaginary;   // Getter function to retrieve the imaginary part of the complex number (floating-point)
}
