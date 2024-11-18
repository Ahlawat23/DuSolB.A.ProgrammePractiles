# Program to find sum of the series
#   1/1! + 2/2! + 3/3! + 4/4! +…….+ n/n!

import math

n = int(input("Enter the value of n: "))

sum_of_series = 0

for i in range(1, n + 1):
    sum_of_series += i / math.factorial(i)

print(f"The sum of the series 1/1! + 2/2! + ... + {n}/{n}! is: {sum_of_series}")
