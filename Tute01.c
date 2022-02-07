/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
 float a,b,ave;
  printf("Enter Number 1 :");
  scanf("%f", &a);  
  printf("Enter Number 2 :");
  scanf("%f", &b);
  ave=(a+b)/2.0;
  printf("Average is :%.2f", ave);
  return 0;
}

