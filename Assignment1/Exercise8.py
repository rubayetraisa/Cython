def guess():
    n=6
    n1=input("Enter a number between 1 and 9: ")
    
    guessednumber=int(n1)
    
    if guessednumber>n:
        print("your guess is higher")
    elif guessednumber<n:
        print("your guess is almost there")
    else:
        print("Your Guess Is Correct!")
        
        
guess()