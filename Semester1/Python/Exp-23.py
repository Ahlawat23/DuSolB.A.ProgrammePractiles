# Program that allows two players to play a game of Rock, Paper, Scissors.

choices = ["rock", "paper", "scissors"]

def winner_is(p1_choice, p2_choice):
    if p1_choice == p2_choice :
        return "its a tie"
    elif (p1_choice == "rock" and p2_choice == "scissors") or (p1_choice == "paper" and p2_choice == "scissors") or(p1_choice == "scissors" and p2_choice == "paper"):
        return "p1 wins"
    else:
        return "p2 win"

print("Choices: rock, paper, scissors\n")

player1 = input("Player 1, enter your choice: ").strip().lower()
player2 = input("Player 2, enter your choice: ").strip().lower()

if player1 not in choices or player2 not in choices:
    print("Invalid input! Choices must be 'rock', 'paper', or 'scissors'.")
else:
    result = winner_is(player1, player2)
    print(result)