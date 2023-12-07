#include <stdio.h>

// Structure for complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    result.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
    return result;
}

// Function to divide two complex numbers
struct Complex divide(struct Complex a, struct Complex b) {
    struct Complex result;
    float denominator = (b.real * b.real) + (b.imaginary * b.imaginary);
    result.real = ((a.real * b.real) + (a.imaginary * b.imaginary)) / denominator;
    result.imaginary = ((a.imaginary * b.real) - (a.real * b.imaginary)) / denominator;
    return result;
}

int main() {
    struct Complex num1, num2;

    printf("Enter real and imaginary parts of complex number 1: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter real and imaginary parts of complex number 2: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    struct Complex sum = add(num1, num2);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);

    struct Complex difference = subtract(num1, num2);
    printf("Difference: %.2f + %.2fi\n", difference.real, difference.imaginary);

    struct Complex product = multiply(num1, num2);
    printf("Product: %.2f + %.2fi\n", product.real, product.imaginary);

    struct Complex quotient = divide(num1, num2);
    printf("Quotient: %.2f + %.2fi\n", quotient.real, quotient.imaginary);

    return 0;
}
