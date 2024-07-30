# Problem 5: Palindrome Check
#  Write a Python function to check if a given string is a palindrome or not.
#  String = "A man, a plan, a canal, Panama"


s="A man, a plan, a canal, Panama"
c=0

def palindrome(x):

    if x==x[::-1]:
       return 1
    else:
        return 0
       
s1=""
s=s.lower()
for i in s:
    if i>='a' and i<='z':
      s1+=i
      
x=palindrome(s1)

if x==0:
    print("Not a palindrome")
else:
    print("It is a palindrome")

