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
  printf("Sum = %d", a+b);
  return 0;
}