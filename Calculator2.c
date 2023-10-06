#include <stdio.h>

int main(void) {
  int a, b;
  // Ask the user to type a number
  printf("Type a number: \n");
  // Get and save the number the user types
  scanf("%d", &a);
  // Ask the user to type a number
  printf("Type a second number: \n");
  // Get and save the number the user types
  scanf("%d", &b);

  if (a > b) {
    printf("a maggiore di b");
  } else if (a < b) {
    printf("a minore di b\n");
  } else {
    printf("a e b sono uguali");
  }
  return 0;
}