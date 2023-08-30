#include <stdio.h>

int main()
{
  float pi=3.14, area, circumference, radius;

  printf("Enter radius of circle : ");
  scanf("%f",&radius);

  area = pi * radius * radius;
  printf("Area of circle is : %f\n",area);

  circumference = 2 * Pi * radius;
  printf("Circumference of circle is : %f",circumference);

  return 0;
}
