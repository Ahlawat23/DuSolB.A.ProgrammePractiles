# Program to find sum of the series
#   1+2+3+4+……+n


n = int(input("Enter n: "))
sum = 0
for i in range(1, n+1):
    sum += i
print("Sum of the series 1 + 2 + 3 + ... + 9 is:", sum)