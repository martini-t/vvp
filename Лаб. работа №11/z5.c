#include <stdio.h>
int main(void)
{
int a,b;
printf("A:");
scanf("%i",&a);

printf("B:");
scanf("%i",&b);
while ((a!=0)&(b!=0)){
if (a>b) a=a%b;
else b=b%a;
}
printf("%i\n",a+b);
return 0;
}