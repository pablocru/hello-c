# Exercise 3: Dynamic 2D Array Manipulation

You need to create a program that dynamically allocates memory for a 2D array (a matrix)
based on user input for the number of rows and columns. Then, you will populate the matrix
with values provided by the user, print the matrix, and finally, free the allocated
memory.

## Steps

1. Input Dimensions: Ask the user to input the number of rows and columns for the matrix.
1. Create Matrix: Dynamically allocate memory for a 2D array based on the user-provided
   dimensions.
1. Populate Matrix: Ask the user to input values for each element of the matrix.
1. Print Matrix: Display the matrix in a formatted manner.
1. Free Memory: Properly free all the dynamically allocated memory.

## Example Output

```txt
Enter the number of rows: 3
Enter the number of columns: 4

Enter the elements of the matrix:
Element at [0][0]: 1
Element at [0][1]: 2
Element at [0][2]: 3
Element at [0][3]: 4
Element at [1][0]: 5
Element at [1][1]: 6
Element at [1][2]: 7
Element at [1][3]: 8
Element at [2][0]: 9
Element at [2][1]: 10
Element at [2][2]: 11
Element at [2][3]: 12

The matrix is:
1   2   3   4
5   6   7   8
9   10  11  12
```

## Hints

- Use malloc to allocate memory for the matrix.
- You can use an array of pointers where each pointer represents a row in the matrix.
- Don’t forget to free each row and the array of pointers itself.

## Key Concepts to Understand

Before you start the exercise, here’s a quick rundown of the key concepts you'll use:

1. Dynamic Memory Allocation for 2D Arrays:
    - A 2D array can be dynamically allocated by first allocating an array of pointers
      (each representing a row) and then allocating memory for each row.
1. Pointer Arithmetic:
    - Understanding how to navigate through the 2D array using pointers.
1. Memory Management:
    - Properly freeing the dynamically allocated memory to avoid memory leaks.
