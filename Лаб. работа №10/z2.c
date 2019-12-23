#include <stdio.h>

int main()
{
int n,i;
printf("n=");
scanf ("%i", &n);

float r=1;
for (i =0; i<=n; ++i)
r*= 1.0+(float)i/10;

printf("результат = %f \n ",r);
return 0;
}
