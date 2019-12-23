#include <stdio.h>

int main()
{
int K,N;
printf("K:");
scanf ("%i", &K);

printf("N:");
scanf ("%i", &N);


printf("%i\n",((K+N-2)%7)+1);

return 0;
}