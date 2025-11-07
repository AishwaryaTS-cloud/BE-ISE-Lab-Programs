"""
Q05_Word_Frequency_in_File.py
Develop a program to print 10 most frequently appearing words in a text file. [Hint: Use dictionary with distinct words and their frequency of occurrences. Sort the dictionary in the reverse order of frequency and display dictionary slice of first 10 items]
"""

import sys
import string
import os.path

# Prompt for filename
fname = input("Enter the filename : ")

# Check if file exists
if not os.path.isfile(fname):
    print("File", fname, "doesn't exist")
    sys.exit(0)

# Open the file
infile = open(fname, "r")

filecontents = ""

# Remove punctuation and replace with spaces
for line in infile:
    for ch in line:
        if ch not in string.punctuation:
            filecontents += ch
        else:
            filecontents += ' '

# Split text into words
wordList = filecontents.split()

# Dictionary to store word frequency
wordFreq = {}

for word in wordList:
    if word not in wordFreq:
        wordFreq[word] = 1
    else:
        wordFreq[word] += 1

# Sort by frequency in descending order
sortedWordFreq = sorted(wordFreq.items(), key=lambda x: x[1], reverse=True)

# Display top 10 most frequent words
print("\n===================================================")
print("10 most frequently appearing words with their count")
print("===================================================")

for i in range(10):
    print(sortedWordFreq[i][0], "occurs", sortedWordFreq[i][1], "times")
infile.close()
"""
Sample Output:
Enter the filename : text.txt

===================================================
10 most frequently appearing words with their count
===================================================
the occurs 45 times
of occurs 24 times
party occurs 12 times
part occurs 12 times
a occurs 9 times
and occurs 8 times
second occurs 7 times
to occurs 6 times
shall occurs 6 times
first occurs 5 times
"""