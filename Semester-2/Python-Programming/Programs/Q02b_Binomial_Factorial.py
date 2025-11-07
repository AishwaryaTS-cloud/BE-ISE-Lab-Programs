"""
02BFactNCR.py

Write a function to calculate factorial of a number. 
Develop a program to compute binomial coefficient (Given N and R).
"""

def fact(num):
    if num == 0:
        return 1
    else:
        return num * fact(num - 1)

n = int(input("Enter the value of N : "))
r = int(input("Enter the value of R (R cannot be negative or greater than N): "))

nCr = fact(n) / (fact(r) * fact(n - r))

print(n, 'C', r, " = ", "%d" % nCr, sep="")

"""
Sample Output:
Enter the value of N : 7
Enter the value of R (R cannot be negative or greater than N): 5
7C5 = 21
"""