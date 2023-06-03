#include <iostream>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 5) {
        cout << "Usage: program <int_real> <int_imaginary> <float_real> <float_imaginary>\n";
        return 1;
    }

    // Parse command-line arguments
    int intReal = atoi(argv[1]);
    int intImaginary = atoi(argv[2]);
    float floatReal = atof(argv[3]);
    float floatImaginary = atof(argv[4]);

    // Create instances of IntComplex and FloatComplex
    IntComplex intComplex(intReal, intImaginary);
    FloatComplex floatComplex(floatReal, floatImaginary);

    // Perform arithmetic operations
    IntComplex intSum = intComplex + intComplex;
    IntComplex intDifference = intComplex - intComplex;
    IntComplex intProduct = intComplex * intComplex;
    IntComplex intQuotient = intComplex / intComplex;

    FloatComplex floatSum = floatComplex + floatComplex;
    FloatComplex floatDifference = floatComplex - floatComplex;
    FloatComplex floatProduct = floatComplex * floatComplex;
    FloatComplex floatQuotient = floatComplex / floatComplex;

    // Print the results
    cout << "Integer Complex Results:\n";
    cout << "Sum: " << intSum.getReal() << " + " << intSum.getImaginary() << "i\n";
    cout << "Difference: " << intDifference.getReal() << " + " << intDifference.getImaginary() << "i\n";
    cout << "Product: " << intProduct.getReal() << " + " << intProduct.getImaginary() << "i\n";
    cout << "Quotient: " << intQuotient.getReal() << " + " << intQuotient.getImaginary() << "i\n";

    cout << "\nFloating Point Complex Results:\n";
    cout << "Sum: " << floatSum.getReal() << " + " << floatSum.getImaginary() << "i\n";
    cout << "Difference: " << floatDifference.getReal() << " + " << floatDifference.getImaginary() << "i\n";
    cout << "Product: " << floatProduct.getReal() << " + " << floatProduct.getImaginary() << "i\n";
    cout << "Quotient: " << floatQuotient.getReal() << " + " << floatQuotient.getImaginary() << "i\n";

    return 0;
}
