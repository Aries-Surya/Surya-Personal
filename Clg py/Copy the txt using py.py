read="read.txt"
f=open(read,'w')
f.write("Hello this is surya")
f.close

file_to_read = "hai.txt"
file_to_write = "write.txt"
file=open(file_to_read,'r')
data=file.read()
file.close

with open (file_to_write,'a+') as file:
    file.write(data)
print("CompletedProcess")

