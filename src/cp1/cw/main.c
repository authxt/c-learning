// Find a area of square

#include <stdio.h>

int main() {
  float length;
  printf("Enter a length of square : ");
  scanf("%f", &length);
  float area = length * length;
  printf("the area of square is %f \n", area);
  
  return 0; 
}
