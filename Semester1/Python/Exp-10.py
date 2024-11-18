# Program that accepts the user's first and last name and prints them in reverse order with a space between them.

name = input("Enter your full name: ")
last_name, first_name = name.split()
print(first_name + " " + last_name)