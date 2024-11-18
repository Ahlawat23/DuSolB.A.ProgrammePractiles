height = int(input("Enter height of alphabet pyramid: "))

for i in range(height):
    print(' ' * (height - i - 1), end='')
    
    for j in range(i + 1):
        print(chr(65 + j), end=' ')
    
    print()
