# Concatenate Two Strings

Implement a function to concatenate two strings in C. This exercise will help you practice
string manipulation, dynamic memory allocation, and memory management.

## Instructions

1. String Concatenation:
    - Implement a function that takes two strings as input and returns a new string that
      is the result of concatenating the two input strings.
1. Dynamic Memory Allocation:
    - Allocate memory dynamically for the new concatenated string.
1. Memory Management:
    - Ensure that you properly manage memory by freeing any dynamically allocated memory
      when it is no longer needed.

## Example Output

```txt
Hello, World!
```

## Hints

- String Length: Implement a function to calculate the length of a string without using
  library functions like `strlen`.
- Dynamic Memory Allocation: Use malloc to allocate enough memory to hold the concatenated
  result.
- Memory Management: Ensure to free the allocated memory to avoid memory leaks.
- Null Terminator: Remember to add a null terminator at the end of the concatenated
  string.

## Additional Notes

- Consider edge cases such as empty strings.
- Ensure proper error handling if memory allocation fails.
