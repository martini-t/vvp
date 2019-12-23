#include <stdio.h>

int main(void)
{
int A,B,C;
printf("A:");
scanf ("%i", &A);

printf("B:");
scanf ("%i", &B);

printf("C:");
scanf ("%i", &C);

printf("%d\n", (A<B) & (B<C));
return 0;
}