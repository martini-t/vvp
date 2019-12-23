#include <stdio.h>

int main()
{
int A;
printf("A:");
scanf ("%i", &A);

printf("%i\n",(A/10)+(A%10)*10);

return 0;
}