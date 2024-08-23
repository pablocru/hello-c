#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scan_number(int *number) {
  int scanStatus = scanf("%d", number);

  // Clears the buffer by fetching each char until reaching the null
  // terminator
  while ((getchar()) != '\n') {
  };

  return scanStatus;
}

int input_length(char statement[]) {
  int length;
  int scanStatus;

  do {
    printf("%s: ", statement);
    scanStatus = scan_number(&length) != 1 || length <= 0;

    if (scanStatus)
      printf("Invalid input. It must be a positive integer.\n");

  } while (scanStatus);

  return length;
}

void populate_matrix(int *matrix, size_t rows, size_t columns) {
  printf("Enter the elements of the matrix:\n");

  for (size_t row = 0; row < rows; row++) {
    for (size_t column = 0; column < columns; column++) {
      int scanStatus;
      do {
        printf("Element at [%d][%d]: ", row, column);
        scanStatus = scan_number(&matrix[row * columns + column]) != 1;

        if (scanStatus)
          printf("Invalid input. It must be an integer.\n");

      } while (scanStatus);
    }
  }
}

void print_matrix(int *matrix, size_t rows, size_t columns) {
  printf("The matrix is:\n");

  for (size_t row = 0; row < rows; row++) {
    for (size_t column = 0; column < columns; column++) {
      printf("%d\t", matrix[row * columns + column]);
    }
    printf("\n");
  }
}

int main() {
  size_t rows = input_length("Enter the number of rows");
  printf("\n");
  size_t columns = input_length("Enter the number of columns");
  printf("\n");

  int *matrix = malloc(rows * columns * sizeof(int));

  if (matrix == NULL) {
    printf("Error: Memory allocation failed for the matrix\n");
    return 1;
  }

  populate_matrix(matrix, rows, columns);
  printf("\n");

  print_matrix(matrix, rows, columns);

  free(matrix);

  return 0;
}
