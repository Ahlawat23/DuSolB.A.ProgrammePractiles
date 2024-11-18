height = int(input("Enter height of pyramid: "))
width = 2*height - 1

for i in range(height):
    print(' ' * i, end='')
    print('*' * (width - 2*i))