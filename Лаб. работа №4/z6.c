#include <stdio.h>
#include <math.h>

int main()
{
float A1,B1,C1,A2,B2,C2;
printf("A1:");
scanf ("%f", &A1);

printf("B1:");
scanf ("%f", &B1);

printf("C1:");
scanf ("%f", &C1);

printf("A2:");
scanf ("%f", &A2);

printf("B2:");
scanf ("%f", &B2);

printf("C2:");
scanf ("%f", &C2);

float D;
D=A1*B2-A2*B1;

float x,y;
x=(C1*B2-C2*B1)/D;
y=(A1*C2-A2*C1)/D;

printf("x:%f\ny:%f\n",x,y);


return 0;
}