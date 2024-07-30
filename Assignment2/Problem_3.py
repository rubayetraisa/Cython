# Problem 3: Find the Missing Number
#  Given a list of n-1 integers from 1 to n, find the missing number in the list.
#  List = [1, 2, 4, 6, 3, 7, 8] # Output: 5

List = [1, 2, 4, 6, 3, 7, 8]
List.sort()
def missing(List):
    k=1
    for i in List:
        if i!=k:
            return k
        k=k+1
    
print(missing(List)) 