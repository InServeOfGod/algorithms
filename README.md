# algorithms
Basic and Intermediate algorithms written with C programming language

You can find algorithms in main folder... 
Every file is called with a number... 
Commentaries and print statements are in Turkish...

you can compile each file by this command

# GNU/Linux
~ gcc -std=c11 -Wall file.c -o file

# Windows
~ gcc -std=c11 -Wall file.c -o file.exe

or you can use another compilers like mingw, cmake, cc, etc...

if you catch an error during compiling about math.h library or some other libraries you can try something like this : 
~ gcc -std=c11 -Wall file.c -o file -lm

However if you see another errors you can ask me...

And also there is a folder called library. In this folder you will see a header.c and header.h file...
These files contains another algorithms but each one is a function instead...

to compile those files run command: 

# GNU/Linux
~ gcc -std=c11 -Wall header.c main.c -o main

that's it folks...
if you have any recommendation or issue you can describe it here.
