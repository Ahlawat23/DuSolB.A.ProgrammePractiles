# Program that allows two players to play a game of Rock, Paper, Scissors.

import random

def player_choice(player):
    choice = input("{}'s turn: ".format(player))
    return choice

def game():
    player1 = "Player 1"
    player2 = "Player 2"
    choices = ["rock", "paper", "scissors"]
    player_1_choice = player_choice(player1)
    player_2_choice = player_choice(player2)
    if player_1_choice == player_2_choice:
        print("It's a tie!")
    elif (player_1_choice == "rock" and player_2_choice == "scissors") or \
            (player_1_choice == "paper" and player_2_choice == "rock") or \
            (player_1_choice == "scissors" and player_2_choice == "paper"):
        print("{} wins!".format(player1))
    else:
        print("{} wins!".format(player2))
    return

game()