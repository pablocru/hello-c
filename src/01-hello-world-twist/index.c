#include <stdio.h>

int main() {
  char greet[] = "Hello, World!";

  /*
    - size_t = non negative number so it's safe to use it to iterate through an array or
      string

    - '\0' = null char or null terminator which marks the end of the string.
  */
  for (size_t i = 0; greet[i] != '\0'; i++) {
    printf("%c\n", greet[i]);
  }
  return 0;
}
