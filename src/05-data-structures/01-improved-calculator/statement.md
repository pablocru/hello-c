# Improved Calculator with Structs

Revise the basic calculator implemented previously to incorporate structs for managing
operations. This exercise will deepen your understanding of data structures and their use
in real-world applications.

## Instructions

1. Define Data Structures:
    - Create a `struct` to represent a mathematical operation. The `struct` should include
      details for the operation and a function pointer for execution.
1. Implement Operations:
    - Define functions for addition, subtraction, multiplication, and division. Use the
      `struct` to handle these operations.
1. Modify the Calculator:
    - Adapt the existing calculator to use `structs` for storing and executing operations.
      Ensure that the user can choose an operation, input numbers, and receive the result.
1. Menu and Execution:
    - Present a menu to the user, allowing them to choose an operation and enter numbers.
      Execute the selected operation using the `struct` and display the result.
1. Error Handling:
    - Ensure that errors, such as division by zero, are handled gracefully.

## Example Output

```txt
Simple Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Select an option (1-5): 1
Enter first number: 5
Enter second number: 3
Result: 5 + 3 = 8

Simple Calculator
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Select an option (1-5): 5
Exiting the program. Goodbye!
```

## Hints

- Use `structs` to manage the operations and encapsulate their logic.
- Implement a function pointer in `struct` for operation execution.
- Ensure proper validation and error handling in your implementation.
