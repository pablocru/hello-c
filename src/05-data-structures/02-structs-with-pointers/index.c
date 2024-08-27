#include <stdio.h>
#include <stdlib.h>

struct Person {
  char *name;
  int age;
  double height;
};

size_t get_string_length(const char *str) {
  size_t length = 0;
  while (str[length] != '\0') {
    length++;
  }

  return length;
}

struct Person *create_person(const char *name, int age, double height) {
  // Dynamic allocate memory for Person
  struct Person *person = malloc(sizeof(struct Person));
  if (person == NULL) {
    printf("Memory allocation failed for struct Person\n");
    return NULL;
  }

  // Dynamic allocate memory for the name of the person
  size_t name_length = get_string_length(name);
  person->name = malloc(name_length + 1);
  if (person->name == NULL) {
    printf("Memory allocation failed for the person's name\n");

    free(person);
    return NULL;
  }

  // Populate the person's name
  size_t i = 0;
  for (; i < name_length; i++) {
    person->name[i] = name[i];
  }
  person->name[i] = '\0';

  // Assign the simple information at the end
  person->age = age;
  person->height = height;

  // Return the pointer to Person
  return person;
}

// The Person argument is passed by value because it is to be read
void display_person(const struct Person *person) {
  printf("Name: %s\n", person->name);
  printf("Age: %d\n", person->age);
  printf("Height: %gm\n", person->height);
}

void change_age(struct Person *person, int age) {
  printf("Updating age...\n");

  // Modify the original struct
  person->age = age;
}

void free_person(struct Person *person) {
  free(person->name);
  free(person);
}

int main() {
  char name[] = "Pablo Cru";
  int age = 27;
  double height = 1.75;

  struct Person *person = create_person(name, age, height);
  if (person == NULL) {
    return 1;
  }

  display_person(person);
  printf("\n");

  change_age(person, 28);
  printf("\n");

  display_person(person);

  free_person(person);

  printf("\n");

  return 0;
}
