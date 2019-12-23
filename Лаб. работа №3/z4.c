#include <stdio.h>
#include <math.h>

int main(void)
{
float x;
printf("x:");
scanf ("%f", &x);

float y=3*pow(x,6)-6*pow(x,2)-7;

printf("y:%f",y);

return 0;
}