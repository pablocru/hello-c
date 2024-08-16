#include <stdio.h>

void reverse_string(char sentence[]) {
  if (sentence[0] && sentence[1]) {
    // Get the length of the string
    size_t sentence_length = 0;
    while (sentence[sentence_length] != '\0') sentence_length++;

    // Initialize the pointers
    char *start = sentence;
    char *end = sentence + sentence_length - 1;

    /*
      Switch the chars:
      - 1) First char with last one
      - 2) Second char with the penultimate
      ...
    */
    while (start < end) {
      /*
        - 1) Store in a temporary variable the value that is stored at the memory address
             pointed to by `start`.
        - 2) Copy the value stored in the pointer `end` to the pointer `start`.
        - 3) Copy the original value (stored in `temp_char`) to `end`.
      */
      char temp_char = *start;
      *start = *end;
      *end = temp_char;

      // Move the pointer `start` to the next char
      start++;

      // Move the pointer `end` to the previous char
      end--;
    }
  }
}

void print_original_and_reversed_string(char sentence[]) {
  printf("Original string: %s\n", sentence);

  reverse_string(sentence);
  printf("Reversed string: %s\n", sentence);
}

int main() {
  /*
    - The char matrix needs the max amount of chars to store. I use 7 because the word
      "world!" has 6 chars + the null terminator char, which is not visible.
  */
  char sentences[2][7] = {"hello", "world!"};
  size_t num_sentences = sizeof sentences / sizeof sentences[0];

  for (size_t i = 0; i < num_sentences; i++) {
    print_original_and_reversed_string(sentences[i]);

    if (i != num_sentences - 1)
      printf("\n");
  }

  return 0;
}
