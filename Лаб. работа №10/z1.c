#include <stdio.h>
int main()
{
float a, b;
printf("цена равна");
scanf ("%f", &a);

for (b= 0.1; b<=1; b+=0.1)
printf("%f кг = %f \n ",b,a*b);
return 0;
}
