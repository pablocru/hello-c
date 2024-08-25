#include <stdio.h>
#include <stdlib.h>

size_t get_length(const char *str) {
  size_t length = 0;

  while (str[length] != '\0') {
    length++;
  };

  return length;
}

char *concat_string(const char *a, const char *b) {
  // Calculate lengths
  size_t a_length = get_length(a);
  size_t b_length = get_length(b);
  size_t target_length = a_length + b_length + 1;

  // Dynamically allocate memory
  char *target = malloc(target_length);
  if (target == NULL) {
    printf("Error: Memory allocation failed\n");
    return NULL;
  }

  // Concat the first string
  size_t i = 0;
  for (; i < a_length; i++) {
    target[i] = a[i];
  }

  // Concat the second string starting reusing the index of the prev loop
  for (size_t j = 0; j < b_length; i++, j++) {
    target[i] = b[j];
  }

  // Add the Null-terminator at the end
  target[i] = '\0';

  return target;
}

int main() {
  char *c = concat_string("Hello", ", World!");

  if (c == NULL) {
    return 1;
  } else {
    printf("%s\n", c);
    free(c);
    return 0;
  }
}
