# Equality checker

Create a program in C that compares two strings and determines whether they are equal
without using any native string comparison functions.

## Instructions

1. Function Implementation:
    - Write a function that takes two strings as input and returns whether they are equal.
    - Do not use any standard library functions like `strcmp` for the comparison.
      Implement the logic yourself.
1. String Comparison:
    - Since C does not have a native boolean type, use an `int` to represent the result,
      where `0` indicates `false` and `1` indicates `true`.
1. Main Function:
    - In the `main` function, prompt the user to enter two strings.
    - Use the comparison function to check if the strings are equal.
    - Print a message indicating whether the strings are equal or not.

## Example Output

```txt
Enter the first string: Hello
Enter the second string: Hello
The strings are equal.

Enter the first string: Hello
Enter the second string: World
The strings are not equal.
```
