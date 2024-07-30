# Problem 8: Find Duplicate Elements
#  Write a Python function to find all duplicate elements in a list and return them in a new list.
#  List = [1, 2, 3, 2, 4, 5, 4, 6]


List = [1, 2, 3, 2, 4, 5, 4, 6]
def duplicate(List):
    newlist=[]
    dict={}
    
    for x in List:
        if x in dict:
            if dict[x]==1:
                newlist.append(x)
                dict[x]=dict[x]+1   
            else:
                dict[x]=dict[x]+1    
        else:
            dict[x]=1
            
    return newlist

print(duplicate(List))