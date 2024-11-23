# Program that executes an operation on a list and handles an IndexError exception if the index is out of range.

my_list = input("Enter a list of integers seprated by spaces: ")

try:
    my_list[len(my_list)]
except IndexError as e:
    print(f"Index error: {e}")
else:
    result = mylist[0]
    print(result)