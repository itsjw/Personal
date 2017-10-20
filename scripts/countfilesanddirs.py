import os

# Path in which you want to count files and directories.
PATH= '/home/xh3n1/Personal/scripts' # Please, write  your path here.

fileCounter = 0
dirCounter = 0

for root, dirs, files in os.walk(PATH):
    print('Looking in:',root)
    for directories in dirs:
        dirCounter += 1
    for Files in files:
        fileCounter += 1
print('Results:')
print('Number of files',fileCounter)
print('Number of Directories',dirCounter)
print('Total:',(dirCounter + fileCounter))