#include <stdio.h>

int main (void)
{
char input_sym;
printf ("\n");
scanf ("%c", &input_sym);
printf ("\n");
printf ("1 - %c, 2 - %c, 3 - %c.\n", input_sym - 1, input_sym, input_sym + 1);
return 0;
}