# 🎮 Sokoban Game in C

> *A classic Sokoban puzzle game I developed in C during secondary school.*

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)
![Game](https://img.shields.io/badge/Type-Console%20Game-green.svg)
![Levels](https://img.shields.io/badge/Levels-3-orange.svg)

---

## 📖 About the Project

This is a Sokoban puzzle game developed in **C** when I was still in secondary school.

The project was one of my early experiences with programming and game development. I built it as a **Windows console application**, implementing the game logic, player movement, box pushing, levels, menus, save/continue functionality, and keyboard controls.

Looking back at this project, it represents one of the first steps in my journey as a software developer.

> 💡 *Built as a school-era programming project — a small project, but an important part of my programming journey.*

---

## 🧩 What is Sokoban?

**Sokoban** is a classic puzzle game where the player must push boxes onto designated locations.

The challenge is that boxes can be **pushed but not pulled**, so every movement has to be carefully planned.

### Game Symbols

| Symbol | Meaning                 |
| :----: | :---------------------- |
|   `@`  | 👤 Player               |
|   `B`  | 📦 Box                  |
|   `x`  | 🎯 Target               |
|   `O`  | ✅ Box placed on target |
|   `#`  | 🧱 Wall                 |
|   ` `  | Empty space             |

---

## ✨ Features

- 🎮 Console-based gameplay
- 🧩 3 playable levels
- 🎯 Box-and-target Sokoban mechanics
- ⌨️ Keyboard controls
- 🕹️ Arrow-key support
- 💾 Save game functionality
- ▶️ Continue saved game
- 📋 Main menu
- 📖 Built-in game instructions
- 🎬 Tutorial support
- ⚙️ Game options
- 🏆 Victory detection
- 🖥️ Windows console interface
- 🎲 Additional mini-game included in the project

---

## 🎮 Controls

### Movement

The game supports both **arrow keys** and **keyboard controls**.

| Action               | Keys            |
| :------------------- | :-------------- |
| ⬆️ Move Up           | `↑` / `W` / `Z` |
| ⬇️ Move Down         | `↓` / `S`       |
| ⬅️ Move Left         | `←` / `A` / `Q` |
| ➡️ Move Right        | `→` / `D`       |
| ⚙️ Game Options      | `F2`            |
| 🚪 Exit current game | `ESC`           |

The controls support both **QWERTY** and **AZERTY** keyboard layouts.

---

## 🗺️ Levels

The game contains **three levels** with different maps and increasing difficulty.

### Level 1
A basic Sokoban puzzle designed to introduce the player to the mechanics.

### Level 2
A more complex map requiring more careful planning.

### Level 3
The final and most challenging level.

> Complete all targets to finish the game.

---

## 🖥️ Screenshots

> 📸 *Screenshots can be added here later.*

For example:

```
+--------------------------------+
|       SOKOBAN GAME BY GIFT     |
|                                |
|          GAME MENU             |
|                                |
|       -> New Game              |
|          Continue Game         |
|          Level                 |
|          More Option           |
|          Exit                  |
|                                |
+--------------------------------+
```

---

## 🛠️ Technologies

This project was developed using:

- **C**
- `stdio.h`
- `stdlib.h`
- `string.h`
- `time.h`
- `conio.h`
- `windows.h`
- Windows Console API

The game uses functions such as `getch()`, `gotoxy()`, and Windows console commands to create the interactive terminal interface.

---

## 🚀 How to Run

### Requirements

Because the project uses Windows-specific libraries such as:

```c
#include <conio.h>
#include <windows.h>
```

it is designed to run on **Windows**.

You will need a C compiler such as **GCC/MinGW**.

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git
```

### 2. Open the project folder

```bash
cd YOUR-REPOSITORY
```

### 3. Compile

```bash
gcc "gift sokoban.c" -o sokoban.exe
```

### 4. Run

```bash
sokoban.exe
```

> ⚠️ *The project contains Windows-specific functionality, so compilation and execution on Linux/macOS may require modifications.*

---

## 📁 Project Structure

For the complete experience, keep the supporting folders together with the source code:

```
Sokoban/
│
├── gift sokoban.c
├── game.c
│
├── instruction/
│   └── instruction.docx
│
├── tuto/
│   └── tuto.avi
│
└── save/
    └── save data.dat
```

The additional files are used by the original program for **instructions**, **tutorial content**, and **game saving**.

---

## 🧠 What I Learned

Although this was an early project, developing it helped me understand several fundamental programming concepts:

- Variables and data types
- Functions
- Conditional statements
- Loops
- Arrays
- Strings
- Pointers
- File handling
- Keyboard input
- Random number generation
- Game-state management
- Basic algorithms
- Console manipulation
- Structuring a larger C program

Most importantly, it gave me an early practical experience of **turning an idea into a working software project**.

---

## 🔧 Possible Improvements

If I revisit this project in the future, I would like to improve:

- [ ] Refactor duplicated code
- [ ] Improve the save/load system
- [ ] Add more levels
- [ ] Add a move counter
- [ ] Add a scoring system
- [ ] Add undo functionality
- [ ] Improve collision detection
- [ ] Improve the user interface
- [ ] Replace Windows-specific functionality with a cross-platform solution
- [ ] Separate the game engine from the user interface
- [ ] Add automated tests
- [ ] Create a graphical version of the game

---

## 👨‍💻 Author

**Gift Mouafo Keryan**

Software Engineering student & aspiring software developer.

This project represents one of my early steps into programming and game development.

*Made with C during my secondary-school years.*

---

## ⭐ A Piece of My Programming Journey

This repository is not just a game.

It is a **snapshot of where my programming journey started**.

From writing a console game in C during secondary school to developing larger software projects, this project represents the curiosity that pushed me to keep learning and building.

> *Every developer starts somewhere. This was one of my beginnings. 🚀*

---

## 📜 License

This project is shared for **educational and portfolio purposes**.

Feel free to explore the code and learn from it.
