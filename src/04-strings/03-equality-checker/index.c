#include <stdio.h>
#include <string.h>

size_t get_string_length(const char *str) {
  size_t length = 0;
  while (str[length] != '\0') {
    length++;
  }

  return length;
}

// 0 -> Different
// 1 -> Equals
int are_equals(char *a, char *b) {
  size_t a_length = get_string_length(a);
  size_t b_length = get_string_length(b);

  if (a_length != b_length) {
    return 0;
  }

  for (size_t i = 0; i < a_length; i++) {
    if (a[i] != b[i]) {
      return 0;
    }
  }

  return 1;
}

int scan_string(char *str, size_t str_length, const char *prompt) {
  printf("%s: ", prompt != NULL ? prompt : "a");

  if (fgets(str, str_length, stdin) != NULL) {
    str[strcspn(str, "\n")] = '\0';

    return 0;
  } else {
    return 1;
  }
}

int main() {
  size_t max_word_length = 20;
  char a[max_word_length];
  char b[max_word_length];

  scan_string(a, max_word_length, "Enter the first string");
  scan_string(b, max_word_length, "Enter the second string");

  printf("The strings are", a, b);
  if (are_equals(a, b) == 0) {
    printf(" not");
  }
  printf(" equal.\n");
}
