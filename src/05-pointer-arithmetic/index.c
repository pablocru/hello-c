#include <stdio.h>

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  int *ptr = arr;

  size_t length = sizeof arr / sizeof arr[0];
  for (size_t i = 0; i < length; i++, ptr++) {
    printf("Value at index %d: %d, Address: %p\n", i, *ptr, ptr);
  }

  return 0;
}
