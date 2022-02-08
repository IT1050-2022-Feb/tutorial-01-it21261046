/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int subject1, subject2;
  float avg;

  printf("Enter Marks for Subject-1 :");
  scanf("%d", &subject1);

  printf("Enter Marks for Subject-2 :");
  scanf("%d", &subject2);

  avg = (subject1 + subject2) / 2.0;

  printf("Average : %.2f", avg);
  return 0;
}

