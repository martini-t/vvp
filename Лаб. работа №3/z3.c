#include <stdio.h>

int main(void)
{
float A,B,C;
printf("A:");
scanf ("%f", &A);

printf("B:");
scanf ("%f", &B);

printf("C:");
scanf ("%f", &C);

A=A+C;
C=A-C;
A=A-C;

B=B+A;
A=B-A;
B=B-A;

printf("\nA:%f\nB:%f\nC:%f\n",A,B,C);

return 0;
}