# 🎮 Guess the Number Game (C++)

A simple console-based game written in **C++** where the computer randomly generates a number between **1 and 100**, and the player has to guess it within limited attempts based on the chosen difficulty level.

---

## 🚀 Features
- Choose difficulty levels:
  - **Easy (10 tries)**
  - **Medium (7 tries)**
  - **Hard (5 tries)**
- Random number generation using `rand()` and `srand(time(0))`
- Replay option without restarting the program
- Simple, interactive console output

---

## 🛠️ Technologies Used
- C++
- Standard Library (`cstdlib`, `ctime`, `iostream`)

---

## 📂 How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/zme2005/guess-the-number-game.git
Compile the program:

bash
Copy code
g++ guess.cpp -o guess
Run the executable:

bash
Copy code
./guess
🎯 Example Gameplay
vbnet
Copy code
Welcome to guess the number game!

You have to guess a number between 1 and 100.
You'll have limited choices based on the level you choose. Good Luck!

Enter the difficulty level:
1 for easy!   2 for medium!   3 for difficult!   0 for ending the game!
Enter the number: 2

You have 7 choices for finding the secret number between 1 and 100.

Enter the number: 45
Nope, 45 is not the right number
The secret number is greater than the number you have chosen 6 choices left.
🤝 Contributing
Feel free to fork this repo and suggest improvements via pull requests.

📜 License
This project is open-source and available under the MIT License.
