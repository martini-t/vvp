#include <stdio.h>

int main(void)
{
float a, b;
printf("a:");
scanf ("%f", &a);

printf("b:");
scanf ("%f", &b);

printf("%f\n",a*a+b*b);
printf("%f\n",a*a-b*b);
printf("%f\n",a*a*b*b);
printf("%f\n",(a*a)/(b*b));

return 0;
}