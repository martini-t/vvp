#include <stdio.h>
int main(void)
{
int a,b;
printf("A:");
scanf ("%i", &a);
printf("B:");
scanf ("%i", &b);

int i,i2;
for (i =1; i<=b-a+1; ++i){
for (i2=1; i2<=i; ++i2) printf("%i ",a+i-1);
printf("\n");
}

return 0;
}