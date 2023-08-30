#include <stdio.h>

int main()
{
    double arr[] = {10,20,30,40,50,60,70,80};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array is : %d\n", size);
    return 0;
}
