fname = input("Enter file name: ") #hai.txt
with open(fname, 'r') as f:
    for line in f:
        print (line.upper())