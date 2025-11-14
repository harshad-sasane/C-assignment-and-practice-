// day7_files.c
#include <stdio.h>

int main(void) {
  FILE *file;

  // Write to a file
  file = fopen("example.txt", "w");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  fprintf(file, "Hello, File I/O in C!\n");
  fclose(file);

  // Read from a file
  char buffer[100];
  file = fopen("example.txt", "r");
  fgets(buffer, 100, file);
  printf("File content: %s", buffer);
  fclose(file);

  return 0;
}
