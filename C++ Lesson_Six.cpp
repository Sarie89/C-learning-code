ARRAYS:
  - Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
  - To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
  EX:
      string cars[4];
  - We have now declared a variable that holds an array of four strings. 
  - To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:
  EX:
      string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
                         or
              int myNum[3] = {10, 20, 30};
ACCESS ELEMENTS OF ARRAYS:
  - You access an array element by referring to the index number inside square brackets [].
  - This statement accesses the value of the first element in cars:
  EX:
      string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
      cout << cars[0];
      // Outputs Volvo  
  - Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
  
CHANGE ARRAY ELEMENTS:
  - To change the value of a specific element, refer to the index number:
  EX:
      string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
      cars[0] = "Opel";
      cout << cars[0];
      // Now outputs Opel instead of Volvo 

LOOP THROUGH ARRAYS:
  - You can loop through the array elements with the for loop.
  EX:
      string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
      for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
      }
  - This example outputs the index of each element together with its value:
      string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
      for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n";
      }  
  EX:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
      }
OMIT ARRAY SIZE:
  - In C++, you don't have to specify the size of the array. 
  - The compiler is smart enough to determine the size of the array based on the number of inserted values:
  EX:
      string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
  - The example above is equal to:
      string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array elements

  - However, the last approach is considered as "good practice", because it will reduce the chance of errors in your program.

OMIT ELEMENTS ON DECLERATION:
  - It is also possible to declare an array without specifying the elements on declaration, and add them later:
  EX:
      string cars[5];
      cars[0] = "Volvo";
      cars[1] = "BMW";


