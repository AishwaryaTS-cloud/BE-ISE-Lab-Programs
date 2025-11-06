/*
Program 6:
Implement Matrix multiplication and validate the rules of multiplication.

Matrix multiplication is possible only if:
Number of columns of Matrix A = Number of rows of Matrix B

If A is of order (m x n) and B is (p x q), then:
- Matrix multiplication is possible only if n = p
- Resultant matrix C will be of order (m x q)
*/

#include <stdio.h>

int main() {
    int a[50][50], b[50][50], c[50][50];
    int m, n, p, q;
    int i, j, k;

    printf("Enter the order of Matrix A (rows columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of Matrix B (rows columns): ");
    scanf("%d %d", &p, &q);

    // Check multiplication possibility
    if (n != p) {
        printf("\nMatrix Multiplication NOT Possible!\n");
        printf("Reason: Columns of A (%d) != Rows of B (%d)\n", n, p);
        return 0;
    }

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Display Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
---------------------------------------
Sample Output 1:
Enter the order of Matrix A (rows columns): 2 2
Enter the order of Matrix B (rows columns): 2 2

Enter elements of Matrix A:
1 2
3 4

Matrix A:
1 2
3 4

Enter elements of Matrix B:
5 6
7 8

Matrix B:
5 6
7 8

Resultant Matrix (A x B):
19 22
43 50
---------------------------------------

Sample Output 2:
Enter the order of Matrix A (rows columns): 2 3
Enter the order of Matrix B (rows columns): 4 5

Matrix Multiplication NOT Possible!
Reason: Columns of A (3) != Rows of B (4)
---------------------------------------
*/
