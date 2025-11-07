"""
08AssertExceptDemo.py

Write a function DivExp(a, b) that returns a/b.
Assert that a > 0 and handle the case where b = 0 using exception handling.
"""

import sys

def DivExp(a, b):
    # Assert condition for 'a'
    assert a > 0, "a should be greater than 0"

    # Handle division by zero
    try:
        result = a / b
    except ZeroDivisionError:
        print("Value of b cannot be zero")
        sys.exit(0)
    else:
        return result


# Read values from user
val1 = int(input("Enter a value for a : "))
val2 = int(input("Enter a value for b : "))

# Call function
val3 = DivExp(val1, val2)

print(val1, "/", val2, "=", val3)

"""
Sample Output:
Enter a value for a : 7
Enter a value for b : 6
7 / 6 = 1.1666666666666667

Enter a value for a : 0
Enter a value for b : 5
AssertionError: a should be greater than 0

Enter a value for a : 6
Enter a value for b : 0
Value of b cannot be zero

"""