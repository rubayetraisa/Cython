#  Problem 2: Reverse Words in a String
#  Write a Python function to reverse the order of words in a given string- "Hello World"


s="Hello World"

def rev(s):
    s=(s[::-1])
    return s

print(rev(s))