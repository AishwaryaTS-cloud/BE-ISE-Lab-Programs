/*
Program 2:
Compute the roots of a quadratic equation by accepting the coefficients.
Print appropriate messages based on the nature of the roots.

Equation: ax^2 + bx + c = 0
Discriminant (D) = b^2 - 4ac
- If D > 0 → Real and Distinct Roots
- If D = 0 → Real and Equal Roots
- If D < 0 → Complex Roots
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Error: 'a' cannot be zero. This is not a quadratic equation.\n");
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and Distinct Roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Real and Equal Roots:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex Roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}

/*
Sample Output:
Enter coefficients a, b, and c (for ax^2 + bx + c = 0):
1 5 6
Real and Distinct Roots:
Root 1 = -2.00
Root 2 = -3.00
*/
