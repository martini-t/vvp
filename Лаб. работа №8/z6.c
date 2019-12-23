#include <stdio.h>

int main(void)
{
int num;
printf("num:") ;
scanf ("%i", &num);

if ((num%2) == 0) printf("Чётное ");
else printf("Нечётное ");
if (num>99) printf("трёхзначное ");
else if ((99>=num) & (num > 9)) printf("двухзначное ");
else if (num <= 9) printf("однозначное ");
printf("число.");

return 0;
}