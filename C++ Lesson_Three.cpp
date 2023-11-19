/*
INPUT:
    - Another way to assign a value to a variable is through user input. 
    - A lot of times, we want the user of the program to enter information for the program.
    - We have cout for output, and there is something called cin that’s used for input!
    - The name cin refers to the standard input stream (pronounced “see-in”, for Character INput)
    - The second operand of the >> operator (“get from”) specifies where that input goes.
    EX: int x; 
        std::cout << "Type a number: ";  Type a number and press enter
        std::cin >> x;  Get user input from the keyboard
        std::cout << "Your number is: "; 
        std::cout << x;  Display the input value


CHAINING:
    - You can use multiple << operators to chain the things you want to output.
    - EX: You can chain the last two lines of the previous example
        std::cout << "Your number is: " << x;

MATH:
    - Other math functions can be used such as sqrt (square root), round (rounds a number) and log (natural logarithm
    - By using the header <cmath>

NAMESPACE LIBRARY:
    - Adding 'using namespace std' before your code
    - You don't have to write std:: before getting input or output

*/

// EXERCISE:

// 1. Write a program, that prompts for three scores, then the name of a player.
//The program then calculates the average of the three scores and displays an appropriate message



// 2. Write a program, that prompts for two integers, 
// subtracts the first number from the second, then prints out their sum and difference


// 3. Edit one of the previous codes to use the Namespace Library
