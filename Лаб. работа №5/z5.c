#include <stdio.h>

int main()
{
int A;
printf("A:");
scanf ("%i", &A);

printf("%i\n",(A%100)/10*100+A%10*10+A/100);

return 0;
}