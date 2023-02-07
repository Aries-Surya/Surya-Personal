print ("REQURIED ARGUMENTS:")
def student(name,age):
    print (name,age)
student ("Surya",18)

print ("KEYWORD ARGUMENTS:")
def student (name,age,rollno,mark):
    print (name,age,rollno,mark)
student (name="keethu",age=24,rollno=50,mark=99)

print ("DEFAULT ARGUMENTS:")
def student (name="####",age="##",rollno="##",mark="##"):
    print (name,age,rollno,mark)
student (name="Dinesh",age=17,rollno=3,mark=95)
print ("    With out name")
student (age=17,rollno=3,mark=95)
print ("    With out rollno")
student (name="Dinesh",age=17,mark=95)
print ("    With out age")
student (name="Dinesh",rollno=3,mark=95)
print ("    With out mark")
student (name="Dinesh",age=17,rollno=3)

print ("VARIABLE-LENGTH ARGUMENTS:")
def student (name,rollno,*mark):
    print(name,rollno,mark)
student ("Bala",18,89,99,79)
