#include <stdio.h>
#include <math.h>

int main(void)
{
float a, b;
printf("a:");
scanf ("%f", &a);

printf("b:");
scanf ("%f", &b);

printf("%f\n",abs(a)+abs(b));
printf("%f\n",abs(a)-abs(b));
printf("%f\n",abs(a)*abs(b));
printf("%f\n",abs(a)/abs(b));

return 0;
} 