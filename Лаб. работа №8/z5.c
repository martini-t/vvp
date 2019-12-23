#include <stdio.h>

int main(void)
{
int num;
printf("num:") ;
scanf ("%i", &num);
if (num==0) printf("Нулевое" );
else {
if (num>0) printf("Положительное ");
else printf("Отрицательное ");
if ((num%2)== 0) printf("чётное ");
else printf("нечётное ");
}
printf("число.");

return 0;
}