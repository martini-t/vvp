#include <stdio.h>
int main(void)
{
int n;
printf("N:");
scanf ("%i", &n);
int k=0, temp=0;
while (temp<n) {
++k;
temp+=3;
}
printf(" %i\n%i\n",k,temp);
return 0;
}