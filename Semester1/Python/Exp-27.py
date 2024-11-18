# Program that executes division and handles an ArithmeticError exception if there is an arithmetic error.

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

try:
    result = num1 // num2
except ArithmeticError as e:
    print(f"Arithmetic error: {e}")
else:
    print("Result:", result)