# SnakeGame

<H1>GAME : SNAKE ON HUNT 🐍🐍 </H1>

<P>&ensp; &ensp; &ensp; A Snake game written in C++ where the snake hunts for food🍊 and grows longer while avoiding obstacles like walls🧱 and its own body. Designed to run on Linux-based systems🖥️, this game brings back the nostalgia and addictive twist.</P>

<h2><b><u>Introduction:🚀</u></b></h2>

&ensp; &ensp; &ensp; Snake on Hunt is a simple but engaging Snake game where you control a snake that hunts for food. As the snake eats food🍉, it grows in size. The main challenge is to avoid hitting walls or the snake’s own body. The game is built in C++ and is optimized to run very smoothly in a Linux terminal.

<u><b><h2>Features:🎯</h2></b></u>

&ensp; &ensp;👉 Classic Snake gameplay with modern tweaks.
<br>
&ensp; &ensp;👉 Random food generation for added excitement.
<br>
&ensp; &ensp;👉 Increasing snake speed as it grows longer.
<br>
&ensp; &ensp;👉 Playable using both arrow keys and WASD keys for flexibility.
<br>
&ensp; &ensp;👉 Clear and intuitive terminal-based interface.
<br>
&ensp; &ensp;👉 Increases speed of snake after it consumes food 
<br>
<u><b><h2>How to play game🎮</h2></b></u>

It's SUPER EASY.
<br>
You can use Arrow keys↗️ to move the hungry snake and you can also use 'W' 'A' 'S' 'D'.
<br>
	&ensp; &ensp;&ensp;👉<b>W</b>: Move up (upwards on the screen).
 <br>
	&ensp; &ensp;&ensp;👉<b>A</b>: Move left (to the left on the screen).
 <br>
	&ensp; &ensp;&ensp;👉<b>S</b>: Move down (downwards on the screen).
 <br>
	&ensp; &ensp;&ensp;👉<b>D</b>: Move right (to the right on the screen).
 <br>
 	
You can use <b>'esc'</b> to pause the game and if you press <b>'esc'</b> again the game resumes.

Credits💳:

👨‍💻Tanishq Shah, <br>
👨‍💻Yash Oza, <br>
👨‍💻Dhvanit Shah, <br>
👨‍💻Yash Vaghela, <br>
👨‍💻Om Sutariya.




Introduction

This is a terminal-based Snake game written in C++ using ANSI escape codes for rendering. The game features real-time, non-blocking keyboard input and dynamically increasing speed as the score increases.

Features

ASCII Graphics: The game board is drawn using Unicode characters for better visualization.

Non-blocking Input Handling: Uses termios and fcntl.h for smooth keyboard input without pausing the game loop.

Collision Detection: The game ends when the snake collides with itself or the walls.

Increasing Difficulty: As the snake eats food, its speed increases, making the game more challenging.

Random Food Placement: Ensures food does not appear on the snake’s body.

Installation & Compilation

Prerequisites

A C++ compiler (GCC, Clang, or MSVC)

A terminal that supports ANSI escape sequences (Linux/macOS or Windows with WSL)

Compilation

Run the following command to compile the program:

 g++ -o snake_game snake_game.cpp -std=c++11

Running the Game

After compilation, execute the program:

./snake_game

How to Play

Arrow Keys (or WASD): Control the snake’s movement.

Eat Food: Increase the score and lengthen the snake.

Avoid Walls & Self-Collision: The game ends if the snake hits a wall or itself.

Code Structure

Files

snake_game.cpp: Contains the entire game logic.

Key Functions

board(): Renders the game board.

input(): Captures player input without blocking execution.

logic(): Updates the game state (snake movement, collision detection, food consumption).

spawn(): Generates food at a random position.

run(): The main game loop that updates the game state and displays the board.

Data Structure Analysis

This game primarily utilizes the following data structures:

Vector (std::vector<pos> snake):

Stores the positions of all snake segments.

The front element represents the snake’s head.

New positions are added to the front, and the last element is removed unless food is consumed.

Provides dynamic resizing and fast insertions at the beginning.

Struct (struct pos):

Represents a coordinate (x, y) on the board.

Used for both the snake’s body parts and the food position.

Boolean Flags (bool over):

Tracks whether the game is over.

Prevents unnecessary computations once the game ends.

Character (char dir, prevdir):

Stores the current and previous movement direction.

Prevents reversing direction instantly (which would cause self-collision).

Speed Control (ll horispeed, vertispeed):

Adjusts game difficulty by dynamically decreasing delay based on the score.

Uses different speeds for horizontal and vertical movement to balance gameplay.

Future Improvements

Pause Feature: Add a key binding to pause the game.

Terminal Resize Handling: Adapt gameplay when the terminal size changes.

AI Mode: Implement a bot that can play the game.

License

This project is open-source under the MIT License.


