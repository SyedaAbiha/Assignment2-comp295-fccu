#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

class IntComplex {
private:
    int real;           // Private data member to store the real part of the complex number
    int imaginary;      // Private data member to store the imaginary part of the complex number

public:
    IntComplex(int real = 0, int imaginary = 0);  // Constructor to initialize the complex number

    IntComplex operator+(const IntComplex& other) const;  // Overloaded operator '+' for addition
    IntComplex operator-(const IntComplex& other) const;  // Overloaded operator '-' for subtraction
    IntComplex operator*(const IntComplex& other) const;  // Overloaded operator '*' for multiplication
    IntComplex operator/(const IntComplex& other) const;  // Overloaded operator '/' for division

    int getReal() const;        // Getter function to retrieve the real part of the complex number
    int getImaginary() const;   // Getter function to retrieve the imaginary part of the complex number
};

#endif  // INTCOMPLEX_H
