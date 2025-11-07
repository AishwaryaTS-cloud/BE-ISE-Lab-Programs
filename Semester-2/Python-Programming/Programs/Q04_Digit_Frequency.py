"""
Q04DigitFrequency.py
Read a multi-digit number (as chars) from the console. Develop a program to print the frequency of each digit with suitable message.
"""

# Digit Frequency Program

num = input("Enter a number: ")
print("The number entered is:", num)

# Get unique digits from the number
unique_digits = set(num)

# Count occurrences of each digit
for digit in unique_digits:
    print(digit, "occurs", num.count(digit), "times")

"""
Sample Output:
Enter a number: 7843338
The number entered is: 7843338
7 occurs 1 times
4 occurs 1 times
3 occurs 3 times
8 occurs 2 times
"""