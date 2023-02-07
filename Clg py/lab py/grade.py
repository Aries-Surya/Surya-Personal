eng = int(input("Enter english mark: "))
tam = int(input("Enter tamil mark: "))
mat = int(input("Enter maths mark: "))
science = int(input("Enter science mark: "))
social = int(input("Enter social mark: "))

total = eng + tam + mat + science + social
per=total//5

if per >= 90:
    print("A grade")
elif per >= 80 and total < 450:
    print("B grade")
elif per >= 70 and total < 350:
    print("C grade")
else:
    print("D grade")