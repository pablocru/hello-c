# Exercise 5: Pointer Arithmetic

In this exercise, you'll explore pointer arithmetic by working with arrays. This will help
you understand how pointers can be used to navigate through an array in memory.

1. Declare an array of 5 integers and initialize it with the values 10, 20, 30, 40, 50.
1. Declare a pointer ptr and make it point to the first element of the array.
1. Use pointer arithmetic to:
    - Print the value of each element in the array by incrementing the pointer.
    - Print the addresses of each element in the array to see how the pointer moves
      through memory.

## Output Example

```txt
Value at index 0: 10, Address: 0x7ffeefbff59c
Value at index 1: 20, Address: 0x7ffeefbff5a0
Value at index 2: 30, Address: 0x7ffeefbff5a4
Value at index 3: 40, Address: 0x7ffeefbff5a8
Value at index 4: 50, Address: 0x7ffeefbff5ac
```

## Note

- The exact addresses will differ based on your system, but they should show a consistent
  step size between elements.
- Ensure you only use pointer arithmetic to navigate the array and not array indexing
  (i.e., arr[i] is not allowed).
