/*
Program 5:
Implement Binary Search on integers.

Binary Search works only when the elements are sorted (ascending or descending).
It repeatedly divides the search range in half to check whether the key element
is present in the array or not.
*/

#include <stdio.h>

int main() {
    int a[50], n, i, key;
    int low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            printf("Successful Search! Element found at Position: %d\n", mid + 1);
            return 0;
        }
        else if(key > a[mid]) {
            low = mid + 1;   // Search in right half
        }
        else {
            high = mid - 1;  // Search in left half
        }
    }

    printf("Unsuccessful Search! Element not found.\n");
    return 0;
}

/*
-------------------------------------
Sample Output 1:
Enter the number of elements: 5
Enter 5 elements in ascending order:
5 10 20 30 80
Enter the element to be searched: 10
Successful Search! Element found at Position: 2

-------------------------------------
Sample Output 2:
Enter the number of elements: 8
Enter 8 elements in ascending order:
5 9 10 15 20 24 30 87
Enter the element to be searched: 99
Unsuccessful Search! Element not found.
-------------------------------------
*/
