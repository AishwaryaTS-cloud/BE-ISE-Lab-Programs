/*
PROGRAM 10:

IMPLEMENT STRUCTURES TO READ, WRITE AND COMPUTE AVERAGE MARKS OF
STUDENTS, AND LIST STUDENTS SCORING ABOVE AND BELOW THE AVERAGE.

Aim:
To write a C Program to implement structures to read, write, and compute average
marks of students. List students scoring above and below the average marks for a class of N students.
*/

#include <stdio.h>

// Define student structure
struct student {
    char usn[10];
    char name[20];
    int m1, m2, m3;
    float total, avg;
};

int main() {
    struct student s[20];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read student details and calculate total & average
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter USN: ");
        scanf("%s", s[i].usn);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter marks for 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3.0;
    }

    printf("\n--- Student Results ---\n");

    // Check and print students above/below average
    for(i = 0; i < n; i++) {
        if(s[i].avg >= 35.0)
            printf("%s has scored above the average marks (%.2f)\n", s[i].name, s[i].avg);
        else
            printf("%s has scored below the average marks (%.2f)\n", s[i].name, s[i].avg);
    }

    return 0;
}

/*
Enter the number of students: 2

Enter details for student 1
Enter USN: 1
Enter Name: Arun
Enter marks for 3 subjects: 23 45 67

Enter details for student 2
Enter USN: 2
Enter Name: Tharun
Enter marks for 3 subjects: 5 3 2

--- Student Results ---
Arun has scored above the average marks (45.00)
Tharun has scored below the average marks (3.33)
*/