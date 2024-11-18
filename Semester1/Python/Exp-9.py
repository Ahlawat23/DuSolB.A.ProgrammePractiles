# Program to take three sides of a triangle and find whether it is scalene, isosceles, equilateral or right triangle.
sides = [float(input("Enter the first side of the triangle: ")),
         float(input("Enter the second side of the triangle: ")),
         float(input("Enter the third side of the triangle: "))]

if all(x == sides[0] for x in sides):
    print("Equilateral triangle")
elif sides[0] == sides[1] or sides[1] == sides[2] or sides[2] == sides[0]:
    print("Isosceles triangle")
else:
    sides.sort()
    if (sides[2]**2 == sides[0]**2 + sides[1]**2):
        print("Right triangle")
    else: 
        print("Its none of them")
