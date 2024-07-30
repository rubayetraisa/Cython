# Problem 6: Count Occurrences
# Write a Python function to count the occurrences of each element in a list and return a dictionary with the counts.

# print(count_occurrences([1, 2, 2, 3, 3, 3, 4, 4, 4, 4]))


list=[1, 2, 2, 3, 3, 3, 4, 4, 4, 4]

def occurrence(list):
    dict={}
    
    for x in list:
        if x in dict:
            dict[x]=dict[x]+1
        else:
            dict[x]=1
            
    return dict

print(occurrence(list))