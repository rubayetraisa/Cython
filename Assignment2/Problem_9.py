
# Problem 9: Remove Duplicates from Sorted Array
#  Write a Python function to remove the duplicates in-place from a sorted array and return the
#  length of the new array/list without duplicates.
#  List = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]


List = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]

def removeDuplicate(List):
    newlist=[]
    dict={}
    
    for x in List:
        if x in dict:
            dict[x]=dict[x]+1    
        else:
            newlist.append(x)
            dict[x]=1
            
            
    return len(newlist)

print(removeDuplicate(List))