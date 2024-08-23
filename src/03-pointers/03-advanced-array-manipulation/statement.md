# Pointers, Functions, and Dynamic Memory Allocation

This exercise will challenge you to work with pointers, functions, and dynamic memory
allocation using `malloc`. You’ll be required to create a program that dynamically
allocates memory for an array, manipulates it, and cleans up properly.

1. Write a function `create_array` that:
    - Takes an integer `n` as input, representing the number of elements.
    - Dynamically allocates memory for an array of n integers using `malloc`.
    - Returns a pointer to the newly created array.
1. Write a function `populate_array` that:
    - Takes a pointer to an array and the size of the array `n`.
    - Fills the array with values from 1 to `n` (e.g., if `n` is 5, the array should
      contain `[1, 2, 3, 4, 5]`).
1. Write a function `print_array` that:
    - Takes a pointer to an array and the size of the array `n`.
    - Prints the values in the array.
1. In the `main` function:
    - Ask the user for the size of the array.
    - Use `create_array` to allocate memory for the array.
    - Use `populate_array` to fill the array.
    - Use `print_array` to display the array.
    - Free the allocated memory using `free`.

## Example Output

```txt
Enter the size of the array: 5
Array elements: 1 2 3 4 5
```

## Note

- Ensure proper memory management by freeing the dynamically allocated memory after you're
  done with it.
