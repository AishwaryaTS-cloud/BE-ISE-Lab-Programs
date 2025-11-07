"""
Q10_Student_Class.py
Develop a program that uses class Student which prompts the user to enter marks in three subjects and calculates total marks, percentage and displays the score card details. [Hint: Use list to store the marks in three subjects and total marks. Use init() method to initialize name, USN and the lists to store marks and total, Use getMarks() method to read marks into the list, and display() method to display the score card details.]
"""

class Student:
    def __init__(self, name = "", usn = "", score = [0,0,0,0]):
        self.name = name
        self.usn = usn
        self.score = score
        
    def getMarks(self):
        self.name = input("Enter student Name : ")
        self.usn = input("Enter student USN : ")
        self.score[0] = int(input("Enter marks in Subject 1 : "))
        self.score[1] = int(input("Enter marks in Subject 2 : "))
        self.score[2] = int(input("Enter marks in Subject 3 : "))
        self.score[3] = self.score[0] + self.score[1] + self.score[2]
        
    def display(self):
        percentage = self.score[3]/3
        spcstr = "=" * 81
        print(spcstr)
        print("SCORE CARD DETAILS".center(81))
        print(spcstr)
        print("%15s"%("NAME"), "%12s"%("USN"), "%8s"%"MARKS1","%8s"%"MARKS2","%8s"%"MARKS3","%8s"%"TOTAL","%12s"%("PERCENTAGE"))
        print(spcstr)
        print("%15s"%self.name, "%12s"%self.usn, "%8d"%self.score[0],"%8d"%self.score[1],"%8d"%self.score[2],"%8d"%self.score[3],"%12.2f"%percentage)
        print(spcstr)


def main():
    s1 = Student()
    s1.getMarks()
    s1.display()

main()

"""
Sample Output:
Enter student Name : Shivappa
Enter student USN : 1SI22CS065
Enter marks in Subject 1 : 87
Enter marks in Subject 2 : 79
Enter marks in Subject 3 : 92
=================================================================================
                                SCORE CARD DETAILS                               
=================================================================================
           NAME          USN   MARKS1   MARKS2   MARKS3    TOTAL   PERCENTAGE
=================================================================================
       Shivappa   1SI22CS065       87       79       92      258        86.00
=================================================================================
"""