#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float a, b, c;
printf("A:");
scanf ("%f", &a);
printf("B:");
scanf ("%f", &b);
printf("C:");
scanf ("%f", &c);

if (abs(a-b)<abs(a-c)) printf("B\n");
else printf("C\n");

return 0;
}