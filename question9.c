/*
   Requirement:
               To perform arithmetic operations such as addition,
               subtraction, multiplication, and division using
               separate functions.

   Design (Algorithm):
                     1. Get two floating-point numbers and an
                        arithmetic operator from the user.
                     2. Create separate functions for addition,
                        subtraction, multiplication, and division.
                     3. Use a selector function to check the
                        operator and call the appropriate function.
                     4. If the operator is division, check whether
                        the second number is zero.
                     5. Return the result to the main function
                        and display it.

   Output:
           Enter two numbers: 10 5
           Enter an operator (+, -, *, /): +
           Result = 15.00
*/

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.");
        return 0;
    }

    return a / b;
}

float calculate(float a, float b, char op)
{
    switch (op)
    {
        case '+':
            return add(a, b);

        case '-':
            return subtract(a, b);

        case '*':
            return multiply(a, b);

        case '/':
            return divide(a, b);

        default:
            printf("Invalid operator.");
            return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculate(num1, num2, op);

    if (op == '/' && num2 == 0)
    {
        return 0;
    }

    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        printf("Result = %.2f", result);
    }

    return 0;
}