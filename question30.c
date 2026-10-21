/*
Requirement:
    To write a C program using a structure to add two
    complex numbers and display the result.

Design (Algorithm):
    1. Start the program.
    2. Define a structure named Complex with real and
       imaginary parts.
    3. Get the real and imaginary parts of two complex numbers.
    4. Create a function to add the two complex numbers.
    5. Add the real parts and imaginary parts separately.
    6. Create a function to display the complex number.
    7. Display the sum of the two complex numbers.
    8. Stop the program.

Output:
    Enter the real and imaginary parts of the first number: 3 4
    Enter the real and imaginary parts of the second number: 2 5
    Sum of complex numbers: 5 + 9i
*/

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex result;

    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

void displayComplex(struct Complex c)
{
    printf("%.2g + %.2gi\n", c.real, c.imaginary);
}

int main()
{
    struct Complex c1, c2, sum;

    printf("Enter the real and imaginary parts of the first number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    printf("Enter the real and imaginary parts of the second number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    sum = addComplex(c1, c2);

    printf("Sum of complex numbers: ");
    displayComplex(sum);

    return 0;
}