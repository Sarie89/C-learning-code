LOOPS:
  - A loop is a programming tool that repeats some code or a set of instructions until a specified condition is reached.
  - You’ll hear the generic term “iterate” when referring to loops; iterate simply means “to repeat”

WHILE LOOPS:
  - The While loop will continue to execute the code inside of it, over and over again, as long as the condition is true.
  EX:
   1.  while (condition) {

    statements
}
  2. while (guess != 8) {
  
      std::cout << "Wrong guess, try again: ";
      std::cin >> guess;
    
    }

FOR LOOPS:
  - When we know exactly how many times we want to iterate (or when we are counting), we can use a for loop instead of a while loop
  EX:
    for (int i = 0; i < 20; i++) 
    {
      std::cout << "I will not throw paper airplanes in class.\n";
    }
  - There are three separate parts to the for statement separated by ;:
  - The initialization of a counter: int i = 0
  - The continue condition: i < 20
  - The change in the counter (in this case an increment): i++
  - So here we are creating a variable i that starts from 0. We will repeat the code inside over and over again when i is less than 20. At the end the for loop, we are adding 1 to i using the ++ operator.



BREAK AND CONTINUE:
  - You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
  - The break statement can also be used to jump out of a loop.  
  EX:
    for (int i = 0; i < 10; i++) {
      if (i == 4) {
        break;
      }
      cout << i << "\n";
    }
  - The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
  EX: 
    for (int i = 0; i < 10; i++) {
      if (i == 4) {
        continue;
      }
      cout << i << "\n";
    }
NESTED LOOPS:
  - It is  possible to place a loop inside another loop. This is called a nested loop.

  - The "inner loop" will be executed one time for each iteration of the "outer loop":
  
  EX:
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
      cout << "Outer: " << i << "\n"; // Executes 2 times
    
      // Inner loop
      for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
      }
    }

FOREACH LOOP:
  - There is also a "for-each loop", which is used exclusively to loop through elements in an array (or other data sets)
  EX:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
      cout << i << "\n";
    }


EXERCISE:

1. Write a program that prompts the user for two numbers. The program will then print out all the numbers between these numbers, including the last number. 
  Assume the first number entered is larger than the second number.



2. Write a program that prints numbers from 2 to 15 using a for loop


3. Write a program that prints out a word 5 times. But in between each of these lines, it prints out a second word 3 times in a sequence.


