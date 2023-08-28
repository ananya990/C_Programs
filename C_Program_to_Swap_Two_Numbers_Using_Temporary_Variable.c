#include<stdio.h>

int main() 
{
  double first_num, second_num, temp;
  printf("Enter first number : ");
  scanf("%lf", &first_num);
  printf("Enter second number : ");
  scanf("%lf", &second_num);

  // value of first is assigned to temp
  temp = first_num;

  // value of second is assigned to first
  first_num = second_num;

  // value of temp (initial value of first) is assigned to second
  second_num = temp;

  printf("\nAfter swapping, first number = %.2lf\n", first_num);
  printf("After swapping, second number = %.2lf", second_num);
  
  return 0;
}
