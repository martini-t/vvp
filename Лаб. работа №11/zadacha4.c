#include <stdio.h>
int main(void)
{
float p;
printf("P:");
scanf ("%f", &p);
int k=1;
float s=1000;
while (s<=1100) {
++k;
s+=s*p/100;
}
printf("K: %i\nS:%f\n",k,s);
return 0;
}