# Program to generate the Fibonacci sequence up to a given number of terms.

def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n-1) + fib(n-2)

for i in range(0, 10): # Change this value to specify the number of terms
    print(fib(i))