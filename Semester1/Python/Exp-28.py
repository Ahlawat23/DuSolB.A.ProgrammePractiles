# Program to print the reverse number pattern using a for loop.

num = int(input("Enter a positive integer: "))

for i in range(0, num + 1):
    for j in range(num - i, 0, -1):
        print(j, end=' ')
    print()