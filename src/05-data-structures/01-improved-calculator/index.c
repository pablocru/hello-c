#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Operation {
  char operator;
  char title[15];
  struct Result (*execute)(double, double);
};

struct Result {
  char message[50];
  double status;
  int code;
};

struct Result addition(double x, double y) {
  struct Result res = {"Success", x + y};

  return res;
}

struct Result subtraction(double x, double y) {
  struct Result res = {"Success", x - y};

  return res;
}

struct Result multiplication(double x, double y) {
  struct Result res = {"Success", x * y};

  return res;
}

struct Result division(double x, double y) {
  struct Result res = {};

  if (y == 0.0) {
    strcpy(res.message, "Invalid operation: You can't divide by zero");
    res.code = 1;
  } else {
    strcpy(res.message, "Success");
    res.status = x / y;
  }

  return res;
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
  struct Operation operations[4] = {{'+', "Addition", &addition},
                                    {'-', "Subtraction", &subtraction},
                                    {'*', "Multiplication", &multiplication},
                                    {'/', "Division", &division}};

  int option;
  int shallExit;

  do {
    printf("Simple Calculator\n");

    for (size_t i = 0; i < 4; i++) {
      printf("%d. %s\n", i + 1, operations[i].title);
    }
    printf("5. Exit\n\n");

    printf("Select an option (1-5): ");
    shallExit = scanf("%d", &option) != 1 || option < 1 || option > 4;
    while ((getchar()) != '\n') {
    };

    if (shallExit) {
      printf("Exiting the program. Goodbye!\n");
    } else {
      // `option` is a number [1-4] so in order to be used as a index it must be
      // decreased by 1
      struct Operation op = operations[option - 1];

      double x = scan_digit("Enter first number");
      double y = scan_digit("Enter second number");

      struct Result res = op.execute(x, y);

      if (res.code) {
        printf("%s\n", res.message);
      } else {
        printf("Result: %g %c %g = %g\n", x, op.operator, y, res.status);
      }
    }
    printf("\n");
  } while (shallExit == 0); // Repeat while the input is valid

  return 0;
}
