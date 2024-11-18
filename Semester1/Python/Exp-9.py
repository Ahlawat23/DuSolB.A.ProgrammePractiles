# Program to take three sides of a triangle and find whether it is scalene, isosceles, equilateral or right triangle.

side1 = int(input("Enter first side: "))
side2 = int(input("Enter second side: "))
side3 = int(input("Enter third side: "))

if side1**2 + side2**2 == side3**2:
    print("Right triangle")
elif side1 == side2 and side2 == side3:
    print("Equilateral triangle")
elif (side1 == side2 and side2 != side3) or (side1 == side3 and side3 != side2):
    print("Isosceles triangle")
else:
    print("Scalene triangle")