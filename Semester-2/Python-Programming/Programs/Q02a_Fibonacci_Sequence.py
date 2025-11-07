"""
02AFibonacci.py

Develop a program to generate Fibonacci sequence of length (N). 
Read N from the console.
"""

num = int(input("Enter the Fibonacci sequence length to be generated : "))

firstTerm = 0
secondTerm = 1
print("The Fibonacci series with", num, "terms is :")
print(firstTerm, secondTerm, end=" ")

for i in range(2, num):
    curTerm = firstTerm + secondTerm
    print(curTerm, end=" ")
    firstTerm = secondTerm
    secondTerm = curTerm
print()

"""
Sample Output:
Enter the Fibonacci sequence length to be generated : 5
The Fibonacci series with 5 terms is :
0 1 1 2 3
"""