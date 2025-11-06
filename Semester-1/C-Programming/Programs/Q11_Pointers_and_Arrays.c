/*
PROGRAM 11:

DEVELOP A PROGRAM USING POINTERS TO COMPUTE THE SUM, MEAN, AND
STANDARD DEVIATION OF ALL ELEMENTS STORED IN AN ARRAY OF N REAL NUMBERS.

Aim:
To develop a C program using pointers to compute the sum, mean, and standard deviation
of all elements stored in an array of n real numbers.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x[20], sum = 0.0, mean, variance, deviation;

    // Read number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read elements into array using pointers
    printf("Enter %d real values:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", (x + i));
    }

    // Calculate sum using pointers
    for(i = 0; i < n; i++) {
        sum += *(x + i);
    }
    printf("Sum = %.4f\n", sum);

    // Calculate mean
    mean = sum / n;

    // Calculate variance using sum of squares of differences from mean
    sum = 0.0;
    for(i = 0; i < n; i++) {
        sum += (*(x + i) - mean) * (*(x + i) - mean);
    }
    variance = sum / n;

    // Standard deviation
    deviation = sqrt(variance);

    // Display results
    printf("Mean (Average) = %.4f\n", mean);
    printf("Variance = %.4f\n", variance);
    printf("Standard Deviation = %.4f\n", deviation);

    return 0;
}

/*
Sample Output:
Enter the number of elements: 5
Enter 5 real values:
3
7
23
1
4
Sum = 38.0000
Mean (Average) = 7.6000
Variance = 63.0400
Standard Deviation = 7.9397
*/