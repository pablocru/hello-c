#include <stdio.h>
#include <stdlib.h>

int *create_array(int n) {
  int *arr = malloc(n * sizeof(int)); // Allocate memory for n integers

  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return NULL; // Return NULL to indicate failure
  }

  /*
    Return the pointer to the allocated array
    - `return *arr;` is incorrect because it's returning the value, not the
    pointer
  */
  return arr;
}

void populate_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}

void print_array(const int *arr, int n) {
  printf("Array elements: ");

  if (n <= 0)
    printf("empty");
  else
    for (size_t i = 0; i < n; i++)
      printf("%d ", arr[i]);

  printf("\n");
}

int main() {
  int length;

  printf("Enter the length of the array: ");
  if (scanf("%d", &length) != 1 || length <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1; // Return an error code
  }
  scanf("%*c"); // clears any leftover characters in the input buffer

  int *arr = create_array(length);

  if (arr != NULL) {
    populate_array(arr, length);

    print_array(arr, length);

    free(arr);
  }

  return 0;
}
