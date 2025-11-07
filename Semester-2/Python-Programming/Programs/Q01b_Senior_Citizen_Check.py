"""
01BChkSnrCitzn.py
Develop a program to read the name and year of birth of a person. 
Display whether the person is a senior citizen or not.
"""

from datetime import date

perName = input("Enter the name of the person : ")
perDOB = int(input("Enter his year of birth : "))

curYear = date.today().year
perAge = curYear - perDOB 

if (perAge > 60):
    print(perName, "aged", perAge, "years is a Senior Citizen.")
else:
    print(perName, "aged", perAge, "years is not a Senior Citizen.")

"""
Sample Output:
Enter the name of the person : Akbar Khan
Enter his year of birth : 1978
Akbar Khan aged 44 years is not a Senior Citizen.

Enter the name of the person : George Best
Enter his year of birth : 1957
George Best aged 65 years is a Senior Citizen.
"""