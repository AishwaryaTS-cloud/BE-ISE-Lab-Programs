/*
PROGRAM 9:

WRITE FUNCTIONS TO IMPLEMENT STRING OPERATIONS SUCH AS COMPARE,
CONCATENATE, STRING LENGTH. USE USER-DEFINED FUNCTIONS.

Aim:
To write functions to implement string operations such as compare, concatenate, string length.
*/

#include <stdio.h>

// Function to calculate string length
int strlength(char str[50]) {
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

// Function to concatenate str2 at the end of str1
void strconcat(char str1[50], char str2[50]) {
    int i = 0, l;
    l = strlength(str1);
    while(str2[i] != '\0') {
        str1[l + i] = str2[i];
        i++;
    }
    str1[l + i] = '\0';
}

// Function to compare two strings
int strcompare(char str1[50], char str2[50]) {
    int i = 0;
    while(str1[i] == str2[i]) {
        if(str1[i] == '\0')
            break;
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char source1[50], source2[50];
    int length1, length2, k;

    printf("Enter the source string 1: ");
    fgets(source1, sizeof(source1), stdin);
    // Remove newline character if present
    if(source1[strlength(source1)-1] == '\n') 
        source1[strlength(source1)-1] = '\0';

    printf("Enter the source string 2: ");
    fgets(source2, sizeof(source2), stdin);
    if(source2[strlength(source2)-1] == '\n') 
        source2[strlength(source2)-1] = '\0';

    length1 = strlength(source1);
    length2 = strlength(source2);

    printf("\nLength of string 1: %d\n", length1);
    printf("Length of string 2: %d\n", length2);

    k = strcompare(source1, source2);
    if(k == 0)
        printf("Both strings are same\n");
    else
        printf("Both strings are different\n");

    strconcat(source1, source2);
    printf("Concatenated string: %s\n", source1);

    return 0;
}

/*
Sample Output:
Enter the source string 1: good
Enter the source string 2: night

Length of string 1: 4
Length of string 2: 5
Both strings are different
Concatenated string: goodnight
*/