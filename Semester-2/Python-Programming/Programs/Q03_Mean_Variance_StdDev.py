"""
Q03MeanVarStdDev.py
Read N numbers from the console and create a list. Develop a program to print mean, variance and standard deviation with suitable messages.
"""

from math import sqrt

# Read the size of the list
num = int(input("Enter the number of elements: "))

# Create and fill the list
numbers = []
for i in range(num):
    value = float(input("Enter a value: "))
    numbers.append(value)

# Display contents
print("\nList:", numbers)

# Step 1: Mean
mean = sum(numbers) / num

# Step 2: Variance
variance = sum((x - mean) ** 2 for x in numbers) / num

# Step 3: Standard Deviation
std_dev = sqrt(variance)

# Final Output
print("\nMean =", mean)
print("Variance =", variance)
print("Standard Deviation =", round(std_dev, 2))

"""
Sample Output:
Enter the number of elements: 5
Enter a value: 45
Enter a value: 34
Enter a value: 86
Enter a value: 92
Enter a value: 35

List: [45.0, 34.0, 86.0, 92.0, 35.0]

Mean = 58.4
Variance = 642.64
Standard Deviation = 25.35
"""