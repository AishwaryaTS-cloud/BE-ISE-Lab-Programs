/*
Program 4:
Write a C program to display the following pattern by reading the number of rows as input.

For example, if rows = 4, the output should be:

1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
*/

#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

/*
Sample Output:
Enter number of rows: 4
1 
1 2 1 
1 2 3 2 1 
1 2 3 4 3 2 1
*/
