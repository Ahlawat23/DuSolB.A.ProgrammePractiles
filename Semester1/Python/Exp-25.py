# Program that opens a file and handles a FileNotFound Error exception if the file does not exist.

def read_file():
    try:
        file_name = input("Enter the name of the file you want to open: ")

        with open(file_name, 'r') as file:
            content = file.read()
            print("\nFile content:")
            print(content)

    except FileNotFoundError:
        print(f"Error: The file '{file_name}' was not found. Please check the file name and try again.")

    finally:
        print("\nThank you for using the file reader program!")

read_file()
