#include <stdio.h>
 
int main()
{
    int l = 2, b = 5;
    int area, peri;
  
    area = l * b;
    peri = 2 * (l + b);
  
    printf("Area of rectangle is : %d", area);
    printf("\nPerimeter of rectangle is : %d", peri);
  
    return 0;
}
