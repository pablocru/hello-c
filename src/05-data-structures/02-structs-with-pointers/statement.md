# Structs with Pointers

Create a simple program in C that defines a Person structure to store basic information
about a person. The structure should hold the following data:

- Name: A string to store the person's name.
- Age: An integer to store the person's age.
- Height: A floating-point number to store the person's height (e.g., in meters or feet).

## Instructions

1. Define the Structure:
    - Create a Person struct that contains the fields mentioned above.
1. Initialize and Print:
    - Declare and initialize an instance of the Person struct with sample data.
        - (Advanced) - instead of using a string literal for the name field, dynamically
          allocate memory for the name using `malloc`. Ensure to free the allocated memory
          before the program exits to prevent memory leaks.
    - Write a function that takes a Person struct as an argument and prints out the
      person's information in a readable format.
1. Modify the Data:
    - Implement a function that modifies the age of a person. Call this function and
      display the updated information.

## Example Output

```txt
Name: John Doe
Age: 30
Height: 1.75m

Updating age...

Name: John Doe
Age: 31
Height: 1.75m
```
