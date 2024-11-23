#  Program to reverse its digit.

def reverse_number(num):
    result = 0
    sign = 1 if num > 0 else -1
    
    while num > 0:
        digit = num % 10
        result = result * 10 + digit 
        num = num // 10
    
    return sign * result
    
number = int(input("Enter a number: "))
print(f"Reversed number is : {reverse_number(number)}")

