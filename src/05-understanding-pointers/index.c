#include <stdio.h>

int main() {
  int x = 100;
  int *ptr = &x;

  printf("The value of x using the pointer is: %d\n", *ptr);

  *ptr = 200;
  printf("The updated value of x using the pointer is: %d\n", x);

  return 0;
}
