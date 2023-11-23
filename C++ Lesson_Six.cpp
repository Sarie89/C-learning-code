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
ARRAY SIZE:
  - To get the size of an array, you can use the sizeof() operator:
  EX:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      cout << sizeof(myNumbers);
      Result:
      20
  
  - The code output 20 instead of 5 because the sizeof() operator returns the size of a type in bytes.
  - We learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
  - To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
   EX:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      int getArrayLength = sizeof(myNumbers) / sizeof(int);
      cout << getArrayLength;
      Result:
      
      5
LOOP THROUGH ARRAYS:
  - In the Arrays and Loops Chapter, we wrote the size of the array in the loop condition (i < 5). 
  - This is not ideal, since it will only work for arrays of a specified size.
  - However, by using the sizeof() approach from the example above, we can now make loops that work for arrays of any size, which is more sustainable.
  Instead of:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n";
      }
  It is better to write:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        cout << myNumbers[i] << "\n";
      }
  - You can also use for-each statements  
  EX:
      int myNumbers[5] = {10, 20, 30, 40, 50};
      for (int i : myNumbers) {
        cout << i << "\n";
      }

MULTI-DIMENSTIONAL ARRAYS:
  - A multi-dimensional array is an array of arrays.
  - To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify 
  - how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:
  EX:
      string letters[2][4];
  - As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. 
  - In a multi-dimensional array, each element in an array literal is another array literal.
  EX:
      string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
      };
  - Each set of square brackets in an array declaration adds another dimension to an array. 
  - An array like the one above is said to have two dimensions.
  - Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. 
    The following array has three dimensions:
  EX:
      string letters[2][2][2] = {
          {
            { "A", "B" },
            { "C", "D" }
          },
          {
            { "E", "F" },
            { "G", "H" }
          }
        };
ACCESSING ELEMENTS OF MULTI-DIMENSIONAL ARRAYS:
  - To access an element of a multi-dimensional array, specify an index number in each of the array's dimensions.
  EX:
      string letters[2][4] = {
      { "A", "B", "C", "D" },
      { "E", "F", "G", "H" }
    };
    
    cout << letters[0][2];  // Outputs "C"

CHANGING ELEMENTS OF MULTI_DIMENTIONAL ARRAYS:
  - To change the value of an element, refer to the index number of the element in each of the dimensions:
  EX:
      string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
      };
      letters[0][0] = "Z";
      
      cout << letters[0][0];  // Now outputs "Z" instead of "A"

LOOPING THROUGH A MULTI_DIMENSIONAL ARRAY:
  - To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.
  EX: 
      string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
      };
      
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
          cout << letters[i][j] << "\n";
        }
      }
  For a three dimentional array:
      string letters[2][2][2] = {
      {
        { "A", "B" },
        { "C", "D" }
      },
      {
        { "E", "F" },
        { "G", "H" }
      }
    };
    
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 2; k++) {
          cout << letters[i][j][k] << "\n";
        }
      }
    }




  
