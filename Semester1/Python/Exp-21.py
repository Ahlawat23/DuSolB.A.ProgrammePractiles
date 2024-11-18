# Program that allows the user to guess a secret number between 1 and 100. The program should keep prompting the user until they guess the correct number.

import random

secret_number = random.randint(1, 100)

user_guess = -1

while user_guess != secret_number:
    user_guess = int(input("Guess a number between 1 and 100: "))

    if user_guess == secret_number:
        print("Congratulations! You guessed correctly.")
        break
    else:
        print(f"Your guess of {user_guess} is not correct. Try again.")