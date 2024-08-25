#include <stdio.h>

int addition(double x, double y, double *res) {
  *res = x + y;

  return 0;
}

int subtraction(double x, double y, double *res) {
  *res = x - y;

  return 0;
}

int multiplication(double x, double y, double *res) {
  *res = x * y;

  return 0;
}

int division(double x, double y, double *res) {
  if (y == 0.0) {
    printf("Invalid operation: You can't divide by zero\n");
    return 1;
  } else {
    *res = x / y;
    return 0;
  }
}

double scan_digit(char statement[]) {
  double number;
  int scanStatus;

  do {
    printf("%s: ", statement);
    scanStatus = scanf("%lf", &number) != 1;

    while ((getchar()) != '\n') {
    };

    if (scanStatus)
      printf("Invalid input. It must be a number.\n");
  } while (scanStatus);

  return number;
}

int main() {
  int option;
  int shallExit;

  do {
    printf("Simple Calculator\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");

    printf("Select an option (1-5): ");
    shallExit = scanf("%d", &option) != 1 || option < 1 || option > 4;
    while ((getchar()) != '\n') {
    };

    if (shallExit) {
      printf("Exiting the program. Goodbye!\n");
    } else {
      double x = scan_digit("Enter first number");
      double y = scan_digit("Enter second number");

      char operator;
      int operation_status;
      double result;
      switch (option) {
      case 1:
        operator= '+';
        operation_status = addition(x, y, &result);
        break;
      case 2:
        operator= '-';
        operation_status = subtraction(x, y, &result);
        break;
      case 3:
        operator= '*';
        operation_status = multiplication(x, y, &result);
        break;
      case 4:
        operator= '/';
        operation_status = division(x, y, &result);
        break;
      }

      if (operation_status == 0) {
        printf("Result: %g %c %g = %g\n", x, operator, y, result);
      }
    }
    printf("\n");
  } while (shallExit == 0); // Repeat while the input is valid

  return 0;
}
