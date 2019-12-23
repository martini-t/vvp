#include <stdio.h>

int main()
{
int N;
printf("N:");
scanf ("%i", &N);

printf("%i\n",(N%(60*60))/60);

return 0;
}