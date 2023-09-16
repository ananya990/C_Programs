#include <stdio.h>
 
int area(int a, int b)
{
    int area;
    area = a * b;
    return area;
}

int perimeter(int a, int b)
{
    int peri;
    peri = 2 * (a + b);
    return peri;
}
 
int main()
{
    int l = 5, b = 8;
    printf("Area of rectangle is : %d", area(l, b));
    printf("\nPerimeter of rectangle is : %d", perimeter(l, b));
    return 0;
}
