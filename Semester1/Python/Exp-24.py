# Program to handle division by zero, Value Error and name error using Try except els efinally block.

def divide_numbers():
    try:
        numerator = float(input("Enter the numerator: "))
        denominator = float(input("Enter the denominator: "))

        result = numerator / denominator

    except ZeroDivisionError:
        print("Error: You can't divide by zero!")

    except ValueError:
        print("Error: Please enter valid numbers!")

    except NameError:
        print("Error: A variable is not defined!")

    else:
        print(f"The result of the division is: {result}")

    finally:
        print("Thank you for using the division program!")
divide_numbers()
