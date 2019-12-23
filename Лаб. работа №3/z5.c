#include <stdio.h>
#include <math.h>

int main(void)
{
float x;
printf("x:");
scanf ("%f", &x);

float y=4*pow(x-3,6)-7*pow(x-3,3)+2;

printf("y:%f\n",y);

return 0;
}