# Random_Number_Guess_Game_C-Language
🎯 Number Guessing Game in C

A simple number guessing game written in C where the computer generates a random number and the player tries to guess it with hints provided after each attempt.

📌 Project Description

This project demonstrates:

Random number generation using rand() and srand()

User input handling

Conditional statements (if, else if, else)

Looping using do-while

Basic game logic in C

The program randomly selects a number between 1 and 100, and the user must guess it.
After each guess, the program tells the user whether to guess higher or lower until the correct number is found.

🧠 How the Game Works

The program generates a random number between 1 and 100

The user is prompted to guess the number

After each guess:

If the guess is too high → "Lower number please"

If the guess is too low → "Higher number please"

If the guess is correct → "Congratulations"

The program counts the number of guesses

Once guessed correctly, it displays the total number of attempts

🛠️ Technologies Used

Language: C

Libraries:

<stdio.h> – Input and output

<stdlib.h> – rand() and srand()

<time.h> – Seeding random number using current time
