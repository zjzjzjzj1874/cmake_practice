#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent)
{
    int result = base;
    if (exponent == 0) {
        return 1;
    }

    int i;
    for (i = 1; i < exponent; i++) {
        result = result * base;
    }

    return result;
}


int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Usage: %s base exponent\n", argv[0]);
        return 1;
    }

    double base = atof(argv[1]);
    int exponent = atof(argv[2]);

    double result = power(base, exponent);
    printf("%g ^ %d result = %g\n", base, exponent, result);
}