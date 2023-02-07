string = input("Enter a string:")
vowels = ["a", "e", "i", "o", "u"]
count = 0
for i in string.lower():
    if i in vowels:
        count += 1
print(count)