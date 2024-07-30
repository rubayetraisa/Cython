def compare(age1,age2):
    if age1>age2:
        print("First brother is older")
    elif age1<age2:
        print("Second brother is older")
    else:
        print("Both are same age")
        

n1=input("Enter the age of first brother: ")
n2=input("Enter the age of second brother: ")
       
compare(int(n1),int(n2))