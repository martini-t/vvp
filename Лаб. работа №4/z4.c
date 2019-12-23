#include <stdio.h>

int main()
{
float V1,V2,S,T;
printf("V1:");
scanf ("%f", &V1);

printf("V2:");
scanf ("%f", &V2);

printf("S:");
scanf ("%f", &S);

printf("T:");
scanf ("%f", &T);

printf("S:%f\n",S+V1*T+V2*T);

return 0;
}