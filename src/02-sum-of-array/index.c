#include <stdio.h>

int main() {
  int numbers[] = {2, 4, 6, 8, 10};

  int sum = 0;

  /*
    - length: sizeof() returns the size in bytes, not the actual size of an array. If an
      integer size is usually 4 bytes, then the size of "numbers" should be 20 bytes
      (4 bytes x 5 items). So dividing the size of the array by the size of the first item
      returns the actual size of the array.
  */
  int length = sizeof(numbers) / sizeof(numbers[0]);
  for (size_t i = 0; i < length; i++) {
    sum += numbers[i];
  }

  printf("The sum of the array elements is: %d\n", sum);

  return 0;
}
