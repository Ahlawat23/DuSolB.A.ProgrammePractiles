height = int(input("Enter height of number pyramid: "))

for i in range(height):
    print(' ' * (height - i - 1), end='')
    
    if i == height - 1:
        print('*' * (2 * i + 1))
    else:
        print('*', end='')
        if i > 0:
            print(' ' * (2 * i - 1), end='')
            print('*')
        else:
            print()
