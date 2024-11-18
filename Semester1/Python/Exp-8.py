# Program to take marks of five subjects from the user, find its total and percentage. Print the grade as:
#      If marks greater than equal to 90 : Grade A+
#      If marks greater than equal to 80 but less than 90 :  Grade A
#      If marks greater than equal to 70 but less than 80 :  Grade B+
#      If marks greater than equal to 60 but less than 70 :  Grade B
#      If marks greater than equal to 50 but less than 60 : Grade C
#      If marks greater than equal to 40 but less than 50 : Grade D
#      If marks less than 40: Grade F

eng = float(input("Score in English: "))
cs = float(input("Score in Computer Science: "))
maths = float(input("Score in Mathematics: "))
phy = float(input("Score in Physics: "))
business = float(input("Score in Business Studies: "))

marks = [eng, cs, maths, phy, business]
total_marks = sum(marks)
percentage = total_marks / 500 * 100
grade = ""

if percentage >= 90:
    grade = "A+"
elif 80 <= percentage < 90:
    grade = "A"
elif 70 <= percentage < 80:
    grade = "B+"
elif 60 <= percentage < 70:
    grade = "B"
elif 50 <= percentage < 60:
    grade = "C"
elif 40 <= percentage < 50:
    grade = "D"
else:
    grade = "F"

print("Your total marks are:", total_marks)
print("Your percentage is:", percentage)
print("Your grade is:", grade)