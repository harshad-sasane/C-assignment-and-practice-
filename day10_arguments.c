// day10_arguments.c
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Number of arguments: %d\n", argc);

  printf("Arguments:\n");
  for (int i = 0; i < argc; i++) {
    printf("%d: %s\n", i, argv[i]);
  }

  return 0;
}
