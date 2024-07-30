# Problem 4: Count Vowels and Consonants
#  Write a Python function to count the number of vowels and consonants in a given string "Hello
#  World"


s="Hello World"

def count(s):
    v=0
    c=0
    s=s.lower()
    for i in s:
        if i==' ':
            continue
        elif i=='a'or i=='e'or i=='i' or i=='o' or i=='u':
            v=v+1
        else:
            c=c+1
    
    print("Number of vowels:",v)
    print("Number of consonents:", c) 
    

count(s)   
    



        