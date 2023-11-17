
//COMMENTS: 
/* 
- In C++ to use single lined comments you use //
- These can be use any where in the code. Either before a block of code or after
- To use multi line comments you use /*... */ 

//SYNTAX IN C++
/*
- Unlike python there are syntax in the code
- To start a code with the use of input and output objects we need to add the header #include <iostream>
- To end a line of code you need to include ';' so the compiler knows that the line of code has ended
- To write code we need a main function and all code inside the main function needs to be inside curly brackets

// Compiling
- C++ is a compiled language. 
- That means that to get a program to run, you must first translate it from the human-readable form to something a machine can “understand.” 
- That translation is done by a program called a compiler.
- What you read and write is called source code (usually it’s in an English-like language like C++)
- What the computer executes is called executable, object code, or machine code (a machine language).

//Compiling and Executing a program
- First when naming your file make sure to add the exxtension .cpp so the program knows that is is in C++
- Then we go to terminal and press Run Build Task. Or the shortcut is Ctrl + Shift + B
- Press Enter after it gives the options for your complier that you installed
- After the files is complied open a new terminal and type ./(filename without .cpp)
- This will execute the code


// VARIABLES
- A variable is simply a name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.
- Here are the basic data types:
    - int: integer numbers
    - double: floating-point numbers
    - char: individual characters
    - string: a sequence of characters
    - bool: true/false values
- DECLARING A VARIABLE:
  - Before we can use a variable, we must declare, or create, it. To declare a variable, we need to provide two things:
    - A type for the variable.
    - A name for the variable.
  - SO if you want to declare variable for a score you would write: 
    - int score;
- INTIALIZING A VARIABLE:
 - After we declare a variable, we can give it a value
 - To do this we simply write:
    - score = 0;
- We can also combine these two steps and declare and intialize the variable at the same time like this:
    - int score = 0;

- Output:
 - To output data you need few things:
 - First, you need std::cout statement. This statement is the "Character OUTput stream". It is pronounced "see-out"
 - Following that you need the "<<" operator
 - Next is what is being outputed. You need double quotes around text.
 - Then follows the ; punctuation.

 EX: std::cout << "hello world \n";
*/


// EXCERCISE:

// 1. Declare a variable for your birth year:

#include <iostream>

int main(){

    // Declare varaible here:


}

// 2. Copy the code to Intialize the same variable in seperate lines of text.

#include <iostream>

int main(){

    // Declare varaible here:

    // Intialize variable here:


}

// 3. Merge the two steps and make Declaring and intializing the same line of code, then compile and execute the program 
