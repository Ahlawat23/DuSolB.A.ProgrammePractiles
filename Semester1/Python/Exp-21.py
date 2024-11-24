# Program that allows the user to guess a secret number between 1 and 100. The program should keep prompting the user until they guess the correct number.

import random

secret_number = random.randint(1, 100)

num = 0
while num != secret_number:
    num = int(input("Enter your guess: "))
    if num < secret_number:
        print("guess higher")
    elif num > secret_number:
        print("guess lower")
    elif num == secret_number:
        print("YOU GUESSED IT!!")