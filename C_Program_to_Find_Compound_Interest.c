#include <stdio.h>
#include<math.h> 

int main() 
{
  double p = 10000, r = 8, t = 3; 
  
  double amt = p * ((pow((1 + r / 100), t)));
  double ci = amt - p;
   
  printf("Compound Interest is : %lf",ci);
  return 0;
}
