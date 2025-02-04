# SnakeGame
<svg fill="none" viewBox="0 0 600 300" width="600" height="300" xmlns="http://www.w3.org/2000/svg">
  <foreignObject width="100%" height="100%">
    <div xmlns="http://www.w3.org/1999/xhtml">
      <style>
        @keyframes hi  {
            0% { transform: rotate( 0.0deg) }
           10% { transform: rotate(14.0deg) }
           20% { transform: rotate(-8.0deg) }
           30% { transform: rotate(14.0deg) }
           40% { transform: rotate(-4.0deg) }
           50% { transform: rotate(10.0deg) }
           60% { transform: rotate( 0.0deg) }
          100% { transform: rotate( 0.0deg) }
        }

        @keyframes gradient {
          0% {
            background-position: 0% 50%;
          }
          50% {
            background-position: 100% 50%;
          }
          100% {
            background-position: 0% 50%;
          }
        }

        .container {
          background: linear-gradient(-45deg, #ee7752, #e73c7e, #23a6d5, #23d5ab);
          background-size: 400% 400%;
          animation: gradient 15s ease infinite;

          width: 100%;
          height: 300px;

          display: flex;
          justify-content: center;
          align-items: center;
          color: white;

          font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol";
        }

        .hi {
          animation: hi 1.5s linear -0.5s infinite;
          display: inline-block;
          transform-origin: 70% 70%;
        }

        @media (prefers-reduced-motion) {
          .container {
            animation: none;
          }

          .hi {
            animation: none;
          }
        }
      </style>

      <div class="container">
        <h1>Hi there, my name is Nikola <div class="hi">👋</div></h1>
      </div>
    </div>
  </foreignObject>
</svg>
<H1>GAME : SNAKE ON HUNT 🐍🐍 </H1>

<P>A Snake game written in C++ where the snake hunts for food🍑 and grows longer while avoiding obstacles like walls🧱 and its own body. Designed to run on Linux-based systems🖥️, this game brings back the nostalgia and addictive twist.</P>

<h2><b><u>Introduction:</u></b></h2>

Snake on Hunt is a simple but engaging Snake game where you control a snake that hunts for food. As the snake eats food, it grows in size. The main challenge is to avoid hitting walls or the snake’s own body. The game is built in C++ and is optimized to run very smoothly in a Linux terminal.

Features:

Classic Snake gameplay with modern tweaks.
Random food generation for added excitement.
Increasing snake speed as it grows longer.
Playable using both arrow keys and WASD keys for flexibility.
Clear and intuitive terminal-based interface.

How to play Game?

It's SUPER EASY.
You can use Arrow keys to move the hungry snake and you can also use WASD.
	W: Move up (upwards on the screen).
	A: Move left (to the left on the screen).
	S: Move down (downwards on the screen).
	D: Move right (to the right on the screen).
You can use 'esc' to pause the game and if you press 'esc' again the game resumes.

Credits:

Tanishq Shah, 
Yash Oza, 
Dhvanit Shah, 
Yash Vaghela, 
Om Sutariya.
