
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

A=A+B+C;
B=A-B-C;
C=A-B-C;
A=A-B-C;

printf("\nA:%f\nB:%f\nC:%f\n",A,B,C);

return 0;
}