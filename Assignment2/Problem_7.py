# Write a Python function to merge two sorted lists into a single sorted list.
#  List1 = [1, 3, 5]
#  List2 = [2, 4, 6]
#  # Output: [1, 2, 3, 4, 5, 6]

List1 = [1, 3, 5]
List2 = [2, 4, 6]

def merge(List1,List2):
    i=j=0
    l1=len(List1)
    l2=len(List2)
    newlist=[]
    while i!=l1 and j!=l2:
        if List1[i]<=List2[j]:
            newlist.append(List1[i])
            i=i+1
        else:
            newlist.append(List2[j])
            j=j+1
            
    while i<l1:
        newlist.append(List1[i])
        i=i+1
    
    while j<l2:
        newlist.append(List2[j])
        j=j+1

    return newlist

print(merge(List1,List2))