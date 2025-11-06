/*
An electricity board charges the following rates for the use of electricity:
- For the first 200 units: 80 paise per unit
- For the next 100 units (201–300 units): 90 paise per unit
- Beyond 300 units: Rs. 1 per unit

All users are charged a minimum of Rs. 100 as meter charge.
If the total amount exceeds Rs. 400, then an additional surcharge of 15% is added.

Write a program to read the consumer's name, the number of units consumed,
and print the total electricity bill.
*/

#include <stdio.h>

int main()
{
    char name[50];
    int unit;
    float charge;

    printf("Enter the name of consumer\n");
    scanf("%s", name);

    printf("Enter the number of units consumed\n");
    scanf("%d", &unit);

    // Calculate bill based on usage slabs
    if(unit <= 200)
    {
        charge = (unit * 0.80) + 100;
    }
    else if(unit <= 300)
    {
        charge = (200 * 0.80) + (unit - 200) * 0.90 + 100;
    }
    else
    {
        charge = (200 * 0.80) + (100 * 0.90) + (unit - 300) * 1.00 + 100;
    }

    // Add 15% surcharge if bill > 400
    if(charge > 400)
    {
        charge = charge + (0.15 * charge);
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Consumer Name : %s\n", name);
    printf("Units Consumed: %d\n", unit);
    printf("Total Rupees  : %.2f\n", charge);

    return 0;
}

/*
Sample Output:

Enter the name of consumer
Mohan
Enter the number of units consumed
269

--- Electricity Bill ---
Consumer Name : Mohan
Units Consumed: 269
Total Rupees  : 322.10
*/
