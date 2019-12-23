#include <stdio.h>

int main(void)
{
float A;
printf("A:");
scanf ("%f", &A);

float tempA;
tempA = A*A;
printf("A^2:%f\n",tempA);

tempA =tempA*tempA;
printf("A^4:%f\n",tempA);

tempA =tempA*tempA;
printf("A^8:%f\n",tempA);

return 0;
}