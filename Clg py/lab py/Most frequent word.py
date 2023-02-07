from collections import Counter
def wordcount(fname):
    with open(fname) as f:
        return Counter(f.read().split())
print("number of words in the file:\n",wordcount("hai.txt"))