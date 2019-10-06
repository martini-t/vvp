#include <stdio.h>
int main(void)
{
int a,b;
printf("A:");
scanf ("%i", &a);
printf("B:");
scanf ("%i", &b);

int temp=a;
while (temp>=0){
temp -= b;
}
printf("%i\n ",temp+b);

return 0;
}