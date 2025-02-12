# GAME : SNAKE ON HUNT 🐍🐍

&ensp;&ensp;&ensp;A **Snake game** written in **C++** where the snake hunts for food🍊 and grows longer while avoiding obstacles like walls🧱 and its own body. Designed to run on **Linux-based systems**🖥️, this game brings back the nostalgia and addictive twist.</P>

## Introduction : 🚀

&ensp;&ensp;&ensp;Snake on Hunt is a simple but engaging Snake game where you control a snake that hunts for food. As the snake eats food🍉, it grows in size. The main challenge is to avoid hitting walls or the snake’s own body. The game is built in C++ and is optimized to run very smoothly in a Linux terminal.

## Features 📌

- 🍊 Random food Placement & ensures food does not appear on the snake’s body.
- 🎮 Playable using both arrow keys and (`W`,`A`,`S`,`D`) keys for flexibility.
- 💻 Clear and intuitive terminal-based interface.
- ASCII Graphics used for better visualization.
- 🔚 The game ends when the snake collides with itself or the walls
- 💨 As the snake eats food, its speed increases, making the game more challenging.



## How to play game🎮

It's Super Easy.
<br>
1. (`W` , `A` , `S` , `D`) : Control the snake’s movement.<br>
	&ensp;&ensp;`W` : Move up (upwards on the screen).<br>
	&ensp;&ensp;`A` : Move left (to the left on the screen).<br>
	&ensp;&ensp;`S` : Move down (downwards on the screen).<br>
	&ensp;&ensp;`D` : Move right (to the right on the screen).<br>
2. **Eat food `@`**: Increase the score and lengthen the snake.
3. **Avoid Walls & Self-Collision** : The game ends if the snake hits a wall or itself.
 	
## 📊 Data Structure Analysis
### Data Structure Used 
This game primarily utilizes the following data structures:

1. **Vector (`std::vector<pos> snake`):**
   - Stores the positions of all snake segments.
   - The front element represents the snake’s head.
   - New positions are added to the front, and the last element is removed unless food is consumed.
   - Provides dynamic resizing and fast insertions at the beginning.
2. **Struct (`struct pos`):**
   - Represents a coordinate (x, y) on the board.
   - Used for both the snake’s body parts and the food position.
3. **Game Class**
   -
Credits💳:

👨‍💻[Tanishq Shah](https://github.com/Tanishq7361) <br>
👨‍💻[Yash Oza](https://github.com/Yash-Oza-ui) <br>
👨‍💻[Dhvanit Shah](https://github.com/shahdhvanit) <br>
👨‍💻[Yash Vaghela](https://github.com/Yash071-ma) <br>
👨‍💻[Om Sutariya](https://github.com/thunder1907)
