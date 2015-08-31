#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  fprintf(stdout, "Hello, World!\n");
  
  char *arr = malloc(sizeof(16));
  if(!arr)
    exit(EXIT_FAILURE);
  memset(arr, 0, sizeof(arr));
  memcpy(arr, "abcdefghijklmnp", 15);
  fprintf(stdout, "%s\n", arr);
  char *new_arr = realloc(arr, 2 * sizeof(arr));
  if(!new_arr)
    exit(EXIT_FAILURE);
  int i = 0;
  for(i = strlen(arr), i < sizeof(new_arr), i++)
    new_arr[i] = '\0';
  free(new_arr);
  return 0;
}
