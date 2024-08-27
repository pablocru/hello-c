#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  double height;
};

struct Person *clone_person(struct Person *original_person) {
  // Create a new instance of Person
  struct Person *cloned_person = malloc(sizeof(struct Person));
  if (cloned_person == NULL) {
    printf(
        "Error during cloning: Memory allocation failed for struct Person\n");
    return NULL;
  }

  // Allocate memory for the name. If it fails, the memory must be freed
  cloned_person->name = malloc(strlen(original_person->name) + 1);
  if (cloned_person->name == NULL) {
    printf("Error during cloning: Memory allocation failed for the person's "
           "name\n");
    free(cloned_person);
    return NULL;
  }
  strcpy(cloned_person->name, original_person->name);

  // Copy the rest of the parameters
  cloned_person->age = original_person->age;
  cloned_person->height = original_person->height;

  return cloned_person;
}

struct Person *person_finder(struct Person *people, size_t people_length,
                             const char *name) {
  for (size_t i = 0; i < people_length; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Person found.\n");
      return clone_person(&people[i]);
    }
  }

  printf("Person not found.\n");
  return NULL;
}

void display_person(struct Person *person) {
  if (person != NULL) {
    printf("Name: %s, Age: %d, Height: %gm\n", person->name, person->age,
           person->height);
  }
}

void display_people(struct Person *people, size_t length) {
  if (people != NULL) {
    for (size_t i = 0; i < length; i++) {
      display_person(&people[i]);
    }
  }
}

void free_person(struct Person *person) {
  if (person != NULL) {
    free(person->name);
    free(person);
  }
}

// 0 -> Without errors
// 1 -> With error
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
  struct Person people[] = {{"Pablo", 28, 1.75},
                            {"Miguel", 22, 1.78},
                            {"Alex", 28, 1.75},
                            {"Juan", 29, 1.8},
                            {"Daniel", 20, 1.8}};

  char name[20];

  if (scan_string(name, sizeof(name), "Enter the name to search") == 0) {
    struct Person *person = person_finder(people, 5, name);
    if (person != NULL) {
      display_person(person);

      printf("\n");
      person->age++;
      printf("After modifying the cloned person:\n");
      display_person(person);

      printf("\n");
      printf("The original array remain immutable:\n");
      display_people(people, 5);

      free_person(person); // Free memory after use
    }
  }

  return 0;
}
