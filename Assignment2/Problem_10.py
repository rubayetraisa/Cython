# Problem 10: Check Anagrams
#  Write a Python function to check if two given strings ("listen", "silent") are anagrams of each
#  other (i.e., they contain the same characters but may be in a different order)


s1="listen"
s2="silent"

def anagram(s1,s2):
    s1=s1.lower()
    s2=s2.lower()
    
    s1=sorted(s1)
    s2=sorted(s2)
    
    if s1==s2:
        print("They are anagrams")
    else:
        print("They aren't anagrams")
        
        
anagram(s1,s2)