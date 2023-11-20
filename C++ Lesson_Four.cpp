/*

Comparison Operators:
    ==	Equal to	x == y	
    !=	Not equal	x != y	
    >	Greater than	x > y	
    <	Less than	x < y	
    >=	Greater than or equal to	x >= y	
    <=	Less than or equal to	x <= y

IF STATEMENTS:
  - An if statement is used to test an expression for truth and execute some code based on it.
    EX: if (condition) {

       some code

     }
  - If the condition is true, then the statements within are executed. Otherwise, the statements are skipped and the program continues on.

  EX: if (flip == 1) {
    
     std::cout << "Heads\n";
    
   }

  - The if keyword is followed by a set of parentheses (). Inside the parentheses (), a condition is provided that evaluates to true or false:
  - If the condition evaluates to true, the code inside the curly braces {} executes.
  - If the condition evaluates to false, the code won’t execute.

ELSE STATEMENT:
  - We can also add an else clause to an if statement to provide code that will only be executed if the condition is false.
  EX:
    if (condition) {
    
      do something
    
    } else {
    
      do something else
    
    }
  - If condition is true, statement 1 is executed. Then the program skips statement 2 and executes any code statements following the if/else clause.
  - If condition is false, statement 1 is skipped and statement 2 is executed. After statement 2 completes, the program executes any code statements following the if/else clause.
  
ELSE IF: 
  - What if you want more than two possible outcomes? This is where else if comes in!
  EX:
    if (condition) {
    
      some code
    
    } else if (condition) {
    
      some code
    
    } else {
    
      some code
    
    }
  The else if statement always comes after the if statement and before the else statement. The else-if statement also takes a condition. You can have as many else if statements
  EX:
    if (grade == 9) {
      
      std::cout << "Freshman\n";
    
    } 
    else if (grade == 10) {
      
      std::cout << "Sophomore\n";
      
    }
    else if (grade == 11) {
    
      std::cout << "Junior\n";
      
    } 
    else if (grade == 12) {
      
      std::cout << "Senior\n";
    
    }
    else {
    
      std::cout << "Super Senior\n";
    
    }

SHORTHAND IF ELSE:
  There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:
  EX:
    variable = (condition) ? expressionTrue : expressionFalse;

  Instead of writing:
    int time = 20;
    if (time < 18) {
      cout << "Good day.";
    } else {
      cout << "Good evening.";
    }
    You can simply write:
    
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

  
LOGICAL OPERATORS:
    && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
    || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
    !	Logical not	Reverse the result, returns false if the result is true	! (x < 5 && x < 10) 

EXERCISE:

1. In chemistry, pH is a scale used to specify the acidity or basicity of an aqueous solution. Write an if, else if, else statement that: 
  - If the pH is greater than 7, output “Basic”. 
  - If pH is less than 7, output “Acidic”. 
  - If neither, output “Neutral”.

2. Write a program that compares two integers. If the first number is bigger than the second then print out a statement. If the second is bigger than the first print another


3. Modify the answer to question 2 to have a shorthand if else
  
  
  
  




*/    
