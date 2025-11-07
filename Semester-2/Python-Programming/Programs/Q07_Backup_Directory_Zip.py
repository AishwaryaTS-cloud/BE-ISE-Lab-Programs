"""
07BackFolderZip.py
Develop a program to back up a given folder (present in the current working directory)
into a ZIP file using relevant modules and suitable methods.
"""

import os
import sys
import pathlib
import zipfile

# Get directory name from user
dirName = input("Enter Directory name that you want to backup : ")

# Check if directory exists
if not os.path.isdir(dirName):
    print("Directory", dirName, "doesn't exists")
    sys.exit(0)

# Prepare the directory path
curDirectory = pathlib.Path(dirName)

# Create the zip archive
with zipfile.ZipFile("myZip.zip", mode="w") as archive:
    for file_path in curDirectory.rglob("*"):
        # Add files to zip with relative path
        archive.write(file_path, arcname=file_path.relative_to(curDirectory))

# Confirm archive creation
if os.path.isfile("myZip.zip"):
    print("Archive myZip.zip created successfully")
else:
    print("Error in creating zip archive")

"""
Sample Output:
Enter Directory name that you want to backup : TestFolder
Archive myZip.zip created successfully  
"""