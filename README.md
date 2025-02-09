# Tic-Tac-Toe (C++)

## 📝 Description

This is a simple **Tic-Tac-Toe** game implemented in **C++** using Object-Oriented Programming (OOP). The game supports
two players, allowing them to take turns marking spaces on a 3×3 grid until a winner is determined or the game ends in a
draw.

---

## 📁 Project Structure

```
TicTacToe/
│── src/
│   ├── main.cpp        # Main entry point
│   ├── TicTacToe.cpp   # Implementation of game logic
│   ├── TicTacToe.h     # Header file (class declaration)
│── build/              # (Optional) Compiled files will go here
│── Makefile            # (Optional) Build automation
│── README.md           # Project description
```

---

## 🚀 Features

✅ Two-player mode (Player 1: X, Player 2: O) \
✅ Detects a win or draw \
✅ Turn-based gameplay \
✅ Uses Object-Oriented Programming (OOP) principles \
✅ Simple command-line interface

---

## 🛠️ Installation & Setup

### **1️⃣ Clone the Repository**

```sh
git clone https://github.com/yourusername/tic-tac-toe-cpp.git
cd tic-tac-toe-cpp
```

### **2️⃣ Compile & Run**

#### **Option 1: Using `g++` (Manual Compilation)**

```sh
g++ src/*.cpp -o tic_tac_toe
./tic_tac_toe
```

#### **Option 2: Using `Makefile` (Automated Build)**

```sh
make run
```

---

## 🎮 How to Play

1. **Run the program** (`./tic_tac_toe`).
2. **Players take turns** entering a position (1-9) to place their marker.
3. The game checks for a **winner or a draw** after every move.
4. The game ends when a player **wins** or the board is **full**.

### **Board Layout**

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

Example Gameplay:

```
Player 1 (X), enter your move (1-9): 5

 1 | 2 | 3
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9
```

---

## 🔧 Possible Enhancements

- 🤖 **Add an AI opponent** (single-player mode)
- 💾 **Save and load games**
- 🎨 **Create a GUI version** using SFML

---

## 📜 License

This project is open-source and available under the **MIT License**.

---
