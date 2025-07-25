# Task_2_Basic
This is a simple number guessing game developed in C++ as part of the Codveda Technologies Internship (Level 1 Task). The program generates a random number, and the user tries to guess it with hints until the correct guess is made.
# 🎯 Number Guessing Game - Codveda Internship Task (Level 1)

## 🔹 Description

This is a simple number guessing game developed in **C++** as part of the **Codveda Technologies Internship (Level 1 Task)**.  
The program generates a random number between 1 and 100, and the user tries to guess it. Feedback is provided after each attempt until the correct number is guessed.

---

## 🔸 Features

- Random number generation using `rand()` and `srand(time(0))`
- Accepts user input in a loop until the correct guess
- Provides feedback:
  - Too high ❌
  - Too low ❌
  - Correct ✅
- Displays number of attempts

---

## 🧠 Skills Demonstrated

- Input/Output in C++
- Random number generation
- Conditional statements (if/else)
- Looping with `do-while`
- Use of `<cstdlib>` and `<ctime>` libraries

---

## 💡 Output Example

Welcome to the Number Guessing Game!
Guess the number (between 1 and 100):
Enter your guess: 25
Too low! Try again.
Enter your guess: 78
Too high! Try again.
Enter your guess: 53
Congratulations! You guessed it in 3 attempt(s).
