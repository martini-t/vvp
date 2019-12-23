#include <stdio.h>
int main()
{
float a;
printf("A=");
scanf ("%f", &a);

int n;
printf("N=");
scanf ("%i", &n);


float b=1,r=1;
int i;

for (i =1; i<=n; ++i)
{
b*=-a;
r+=b;
}
printf("%f\n",r);
return 0;
}
