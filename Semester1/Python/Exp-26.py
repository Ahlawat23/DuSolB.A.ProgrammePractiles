# Program that executes an operation on a list and handles an IndexError exception if the index is out of range.

my_list = input("Enter a list of integers separated by spaces: ")

try:
    my_list[5]
except IndexError as e:
    print(f"Index error: {e}")
else:
    result = my_list[0] + my_list[1]
    print(result)