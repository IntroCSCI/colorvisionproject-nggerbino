# !!!Color vision Project!!!

*The program i have made will give you 5 colors that are visibly diffrent even to color blind people, all you have to is either chose between the two diffrent ways of generating color, input is the name of the file a color, and if you are doing the "Personality Test" then you also have to answer the presonality question.*


### v0.2 Updates

*I fixed the output of the code made the code much easier to use and fixed alot of the problems with my code that i had in the first version. I also added a new function that allows people to use their personality to come up with a diffrent color scheme.*

### v1.0 Updates

*I fixed many more bugs and made it much easier to use, made the colors available to find in one of the prompts in my code, I also added a class statement to keep things a bit more tidy and easier to use. I have also added more comments to make it easier to understand.*


## Developer

!!!Nathan Gerbino!!!

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
!!!"Would you like to generate colors using a name of a premade svg color if so enter 'colorgenerator', or if you would like to generate colors using the personality test type 'personalitytest'.
colorgenerator
Enter the file name.
Nathan
Enter a premade svg color from the list of 147 on this website https://www.december.com/html/spec/colorsvg.html .
pink
Your list of color combinations is ; pink, DarkRed, DarkGreen, Indigo, White, and Black.
If you did not see a list of colors then you did not choose a color. Would you like to make choose a diffrent color, type 'yes' to choose a diffrent color or type 'no' to end the program.
yes
Enter a premade svg color from the list of 147 on this website https://www.december.com/html/spec/colorsvg.html .
gold
Your list of color combinations is ; gold, DarkRed, DarkGreen, Indigo, White, and Black.
If you did not see a list of colors then you did not choose a color. Would you like to make choose a diffrent color, type 'yes' to choose a diffrent color or type 'no' to end the program.
no
Exiting color vision project

Would you like to generate colors using a name of a premade svg color if so enter 'colorgenerator', or if you would like to generate colors using the personality test type 'personalitytest'.
personalityteSt
Enter the file name.
aPple
Enter a premade svg color from the list of 147 on this website https://www.december.com/html/spec/colorsvg.html .
WhIte
enter one of personality's listed that fits you the best ; 'average', 'reserved', 'selfcentered', 'rolemodel'.
average
Your list of color combinations is ; white, DarkRed, DarkGreen, Indigo, Gold, and black.
If you did not see a list of colors then you did not choose a personality. Would you like to make choose a diffrent personality, type 'yes' to choose a diffrent personality or type 'no' to end the program
yes
enter one of personality's listed that fits you the best ; 'average', 'reserved', 'selfcentered', 'rolemodel'.
rolemodle
If you did not see a list of colors then you did not choose a personality. Would you like to make choose a diffrent personality, type 'yes' to choose a diffrent personality or type 'no' to end the program
yes
enter one of personality's listed that fits you the best ; 'average', 'reserved', 'selfcentered', 'rolemodel'.
selfcentered
Your list of color combinations is ; white, DarkRed, DarkGreen, Indigo, Gold, and DimGray.
If you did not see a list of colors then you did not choose a personality. Would you like to make choose a diffrent personality, type 'yes' to choose a diffrent personality or type 'no' to end the program"!!!
```

## C++ Guide

### Variables and Data Types

!!!In this program i used string and int. String was used for all of the situations that i needed to store a variable like the color and file name, I used int to keep while loops and other things to continue!!!

### Console Input and Output

!!!I used cin statements to get input into my program and used cout to tell the one using the program what is going on!!!

### Decisions

!!!I used alot of if and else statemnts to keep the whole thing working well i probibly shouldnt have used as many as I did it just seemed as though the simplest way to fix the problem!!!

### Iteration

!!!I used many while loops to try to keep the code working well!!!

### File Input and Output

!!!I had the my file input to be the way to save the file into the files folder!!!

### Arrays/Vectors

*I used arrays in order to change the colors in the functions labled "personalitycolor".*

### Functions

*I used a function called "colorfulpersonality" to basicly ask the use for what their personality type is*

### Classes

*I used classes to hold many of my multuple data types, to hold my data a little bit better and also alowing of me to minipulate that data a bit better.*
