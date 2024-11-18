height = int(input("Enter height of pyramid: "))
width = 2*height - 1

for i in range(height):
    print(' '*(width-i), end='')
    print('*'*(2*i+1))