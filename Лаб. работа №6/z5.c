#include <stdio.h>

int main(void)
{
int year;
printf("Год:");
scanf ("%i", &year);

printf("%i\n",((year-1)/100)+1);

return 0;
}