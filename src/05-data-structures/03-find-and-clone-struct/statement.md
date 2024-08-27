# Find and Clone a Person in an Array of Structs

Create and manage an array of `Person` structures, with the added functionality of cloning
a found person for later modification.

## Instructions

1. Create an Array of Persons:
    - Define an array of `Person` structures with a size of 5.
1. Populate the Array:
    - Populate the array with data for 5 different persons.
1. Implement Search Functionality:
    - Write a function that takes the array and a name as input, searches for the person
      with the matching name, and returns a deep-cloned copy of the `Person` structure if
      found.
1. Demonstrate the Functionality:
    - Display the information of the cloned person before modification.
    - Modify the cloned instance in some way (e.g., change the age).
    - Ensure that the original array remains unchanged after the modifications to the
      cloned `Person`.

## Example Output

```txt
Enter the name to search: Charlotte
Person not found.
```

```txt
Enter the name to search: Emily
Person found.
Name: Emily,  Age: 27,  Height: 1.65m

After modifying the cloned person:
Name: Emily,  Age: 28,  Height: 1.65m

The original array remains immutable:
Name: Emily,  Age: 27,  Height: 1.65m
Name: James,  Age: 23,  Height: 1.80m
Name: Oliver, Age: 29,  Height: 1.75m
Name: Sophie, Age: 32,  Height: 1.70m
Name: Harry,  Age: 21,  Height: 1.68m
```

## Hints

- Consider how you can create a deep copy of the Person struct, ensuring that changes to
  the cloned version do not affect the original.
- Be mindful of memory management, especially when dynamically allocating memory for the
  clone.
