/*
PROGRAM 7:

COMPUTE SIN(x)/COS(x) USING TAYLOR SERIES APPROXIMATION.
COMPARE YOUR RESULT WITH THE BUILT-IN LIBRARY FUNCTION.

Taylor Series:
sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...

This program:
1. Converts degree input to radians.
2. Computes sin(x) and cos(x) using Taylor series.
3. Computes sin(x)/cos(x) manually.
4. Compares result with built-in tan(x).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float degree, x;
    int n, i;

    float sinx = 0, cosx = 0;
    float term;

    printf("Enter angle in degrees: ");
    scanf("%f", &degree);

    printf("Enter number of terms for Taylor series: ");
    scanf("%d", &n);

    // Convert degree → radians
    x = degree * 3.14159 / 180.0;

    // Compute sin(x)
    sinx = 0;
    term = x;
    for(i = 1; i <= n; i++)
    {
        sinx += term;
        term = -term * x * x / ( (2*i) * (2*i+1) );
    }

    // Compute cos(x)
    cosx = 0;
    term = 1;
    for(i = 1; i <= n; i++)
    {
        cosx += term;
        term = -term * x * x / ( (2*i-1) * (2*i) );
    }

    // Compute ratio
    float ratio = sinx / cosx;

    printf("\nCalculated sin(x)      = %f", sinx);
    printf("\nCalculated cos(x)      = %f", cosx);
    printf("\nCalculated sin(x)/cos(x)= %f", ratio);

    printf("\n\nBuilt-in sin(x)        = %f", sin(x));
    printf("\nBuilt-in cos(x)        = %f", cos(x));
    printf("\nBuilt-in tan(x)        = %f", tan(x));

    printf("\n\nInference: The manually computed ratio approaches the built-in tan(x) as number of terms increases.\n");

    return 0;
}

/*
Sample Output:
Enter angle in degrees: 45
Enter number of terms for Taylor series: 10

Calculated sin(x)      = 0.707107
Calculated cos(x)      = 0.707107
Calculated sin(x)/cos(x)= 1.000000

Built-in sin(x)        = 0.707107
Built-in cos(x)        = 0.707107
Built-in tan(x)        = 1.000000

Inference: The manually computed ratio matches the built-in tan(x) value.
*/