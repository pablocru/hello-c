# Creating a Simple Calculator

Implement a basic calculator that performs addition, subtraction, multiplication, and
division. The calculator should prompt the user to enter two numbers and choose an
operation. It should then perform the operation and display the result.

## Instructions

1. Display a Menu:
    - Present a menu to the user with the following options:
        - Addition
        - Subtraction
        - Multiplication
        - Division
        - Exit
1. Input Handling:
    - Prompt the user to select an option from the menu.
    - If the user selects an option, ask them to enter two numbers.
    - Based on the selected option, perform the corresponding arithmetic operation.
1. Perform Calculation:
    - Implement functions for each arithmetic operation (addition, subtraction,
      multiplication, and division).
    - Ensure to handle division by zero properly.
1. Display Result:
    - Output the result of the operation to the user.
    - After displaying the result, show the menu again until the user chooses to exit.
1. Exit the Program:
    - When the user selects the exit option, terminate the program.

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

- Use switch statements to handle the menu options.
- Use functions to encapsulate the arithmetic operations.
- Ensure proper validation of user input to handle incorrect inputs gracefully.
