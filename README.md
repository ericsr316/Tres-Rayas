# Tres-Rayas
It's just a basic game. It still has some issues but i'm starting practice C++ so I expect fix them soon.

Tres Rayas it's a simple game where the first one make a line with their caracter.

It's basically a matrix  two dimensional array 3x3 

# Game

This is the board where the player's character is 'X' and the machine is 'O' 

<p>*  *  *</p>

<p>*  *  *</p>

<p>*  *  *</p>

You must type the coordinate where you will write the character for example

Input: 0
Input: 2

Output: 

<p>* * X</p>

<p>* * *</p>

<p>* * *</p>

## AI

There isn't AI the program just choose a random number with the function **rand()** between 0 and 2 due to the numbers of columns and rows. 

### Victory

Yes, you can win if you make a line with three characters for example: 

### First Case     
<p> X X X </p>
<p> O * O </p>
<p> O X O </p>

### Second Case  
<p> O X O</p>
<p> X X O</p>
<p> X X X</p>

### Third Case
<p> X O O </p>
<p> X * O </p>
<p> X O O </p> 

Yoy cannot win with this examples due to some issues but i hope fix them soon

<p> X O *</p>

<p> O X O</p>

<p> O O X</p>

And well that's all about this game
~I hope make my english better soon :s~
