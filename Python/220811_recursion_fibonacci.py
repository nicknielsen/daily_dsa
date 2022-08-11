# Daily Data Structures and Algorithms in Python

# Thursday, August 11, 2022
#
# Implement two functions:
# 1. A function to find the number in the Fibonacci sequence at place n.
# 2. A function to find the sum of natural numbers up to a number n.

def sum_natural_nums(n):
    if(n == 1):
        return 1
    else:
        return n + sum_natural_nums(n-1)

def fib(n):
    if (n == 0):
        return 0
    elif (n < 3):
        return 1
    else:
        return fib(n-1) + fib(n-2)

n = 10

print("The sum of natural numbers up to " + str(n) + " is " + str(sum_natural_nums(5)))

print("The Fibonacci sequence at place "+ str(n) +" is " + str(fib(n)))