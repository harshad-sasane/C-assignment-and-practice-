// day6_structures.c
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
  char name[50];
  int age;
  float gpa;
};

int main(void) {
  // Create structure variable
  struct Student student1;

  // Assign values
  strcpy(student1.name, "Alice");
  student1.age = 20;
  student1.gpa = 3.5;

  // Print structure members
  printf("Student Name: %s\n", student1.name);
  printf("Student Age: %d\n", student1.age);
  printf("Student GPA: %.2f\n", student1.gpa);

  return 0;
}
