"""
01AStudDetails.py
Develop a program to read the student details like Name, USN, and Marks in three subjects. 
Display the student details, total marks and percentage with suitable messages.
"""

stName = input("Enter the name of the student : ")
stUSN = input("Enter the USN of the student : ")
stMarks1 = int(input("Enter marks in Subject 1 : "))
stMarks2 = int(input("Enter marks in Subject 2 : "))
stMarks3 = int(input("Enter marks in Subject 3 : "))

print("Student Details\n=========================")
print("%12s"%("Name :"), stName)
print("%12s"%("USN :"), stUSN)
print("%12s"%("Marks 1 :"), stMarks1)
print("%12s"%("Marks 2 :"), stMarks2)
print("%12s"%("Marks 3 :"), stMarks3)
print("%12s"%("Total :"), stMarks1+stMarks2+stMarks3)
print("%12s"%("Percent :"), "%.2f"%((stMarks1+stMarks2+stMarks3)/3))
print("=========================")

"""
Sample Output:
Enter the name of the student : RAMESH
Enter the USN of the student : 1SI22CS036
Enter marks in Subject 1 : 87
Enter marks in Subject 2 : 78
Enter marks in Subject 3 : 65

Student Details
=========================
      Name : RAMESH
       USN : 1SI22CS036
   Marks 1 : 87
   Marks 2 : 78
   Marks 3 : 65
     Total : 230
   Percent : 76.67
=========================

"""