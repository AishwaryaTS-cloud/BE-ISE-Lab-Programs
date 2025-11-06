/*
PROGRAM 8:

SORT THE GIVEN SET OF N NUMBERS USING BUBBLE SORT.

Logic:
- Compare each pair of adjacent elements.
- If the first is greater than the second, swap them.
- After each pass, the largest element moves to the end.
- Repeat for (n-1) passes.
*/

#include <stdio.h>

int main()
{
    int a[50], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nOriginal elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Bubble Sort
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\n\nSorted elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}

/*
Sample Output:
Enter the number of elements: 5
Enter 5 elements:
30 10 50 20 40

Original elements:
30 10 50 20 40

Sorted elements:
10 20 30 40 50
*/