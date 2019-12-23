#include <stdio.h>

int main(void)
{
float a,b,c;
printf("a:");
scanf ("%f", &a);

printf("b:");
scanf ("%f", &b);

printf("c:");
scanf ("%f", &c);

printf("%d\n",(a<b+c) & (b<a+c) & (c<a+b));
return 0;
}