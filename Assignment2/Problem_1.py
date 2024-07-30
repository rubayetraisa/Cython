# Problem 1: Fibonacci Sequence
#  Write a Python function to generate the Fibonacci sequence up to a specified number n. Where
#  n=100


def fib(n):
    a=0
    b=1
    print(a, " ", b)
    n=n-2
    for i in range(n):
        temp=b
        b=a+b
        a=temp
        print(b," ")


n=100
fib(n)
    