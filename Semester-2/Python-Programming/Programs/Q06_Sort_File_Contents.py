"""
Q06SortFileContents.py
Develop a program to sort the contents of a text file and write the sorted contents into a separate text file. [Hint: Use string methods strip(), len(), list methods sort(), append(), and file methods open(), readlines(), and write()].
"""

import os.path
import sys

# Get filename from user
fname = input("Enter the filename whose contents are to be sorted : ")

# Check if file exists
if not os.path.isfile(fname):
    print("File", fname, "doesn't exist")
    sys.exit(0)

# Open the file and read all lines
infile = open(fname, "r")
lines = infile.readlines()

# Remove newline characters and store cleaned lines
cleaned_lines = []
for line in lines:
    cleaned_lines.append(line.strip())

# Sort the lines alphabetically
cleaned_lines.sort()

# Write sorted lines into new file
outfile = open("sorted.txt", "w")
for line in cleaned_lines:
    outfile.write(line + "\n")

# Close files
infile.close()
outfile.close()

# Display confirmation and show contents
if os.path.isfile("sorted.txt"):
    print("\nFile containing sorted content sorted.txt created successfully")
    print("sorted.txt contains", len(cleaned_lines), "lines")
    print("Contents of sorted.txt")
    print("=================================================================")
    showfile = open("sorted.txt", "r")
    for line in showfile:
        print(line, end="")
    showfile.close()
    print("=================================================================")  
else:
    print("Error in creating sorted.txt file")

"""
Sample Output:
Enter the filename whose contents are to be sorted : unsorted.txt
File containing sorted content sorted.txt created successfully
sorted.txt contains 5 lines
Contents of sorted.txt
=================================================================
Apple
Banana
Grapes
Orange
Pineapple
=================================================================
"""