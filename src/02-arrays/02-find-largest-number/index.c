#include <stdio.h>

int get_largest_number(int numbers[], size_t numbers_length) {
  int largest_number = numbers[0];

  for (size_t i = 1; i < numbers_length; i++) {
    int current_number = numbers[i];

    if (current_number > largest_number) {
      largest_number = current_number;
    }
  }

  return largest_number;
}

int main() {
  int numbers[] = {4, 1, 7, 9, 2, 6, 8, 5, 3, 10};
  size_t numbers_length = sizeof numbers / sizeof numbers[0];

  printf("The largest number is: %d\n", get_largest_number(numbers, numbers_length));

  return 0;
}
