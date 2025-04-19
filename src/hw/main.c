#include <stdio.h>

int main() {
  int a, b; 
  printf("Enter number a : ");
  scanf("%d", &a);

  printf("Enter a number b : ");
  scanf("%d", &b);

  int sum = a + b;
  printf("This is a sum %d \n", sum);

  return 0; 
}
