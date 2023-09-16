#include <stdio.h>
  
int Check_Neon_Number(int num) 
{  
    int square = num * num;
    int n = square;
    int digit, sum = 0;
  
    // To calculate the sum of digits
    while (n != 0) 
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
  
    // Checking the condition of a Neon Number
    if (sum == num)
        return 1;
    else
        return 0; 
}

int main()
{
    int num = 11;

    int ans = Check_Neon_Number(num);
  
    if (ans == 1)
        printf("Yes. It is a neon number.");
    else
        printf("No. It is not a neon number.");
  
    return 0;
}
