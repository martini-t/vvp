#include <stdio.h>

int main(void)
{
float A;
printf("A:");
scanf ("%f", &A);

float temp1A,temp2A;

temp1A = A*A;
printf("A^2:%f\n",temp1A);

temp2A=temp1A*A;
printf("A^3:%f\n",temp2A);

temp1A =temp1A*temp2A;
printf("A^5:%f\n",temp1A);

temp2A =temp1A*temp1A;
printf("A^10:%f\n",temp2A);

temp1A =temp2A*temp1A;
printf("A^15:%f\n",temp1A);

return 0;
}
