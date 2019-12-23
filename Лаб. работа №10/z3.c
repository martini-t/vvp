#include <stdio.h>

int main()
{
int n;
printf("n:");
scanf ("%i", &n);
int r=0;
int i;
for (i =1; i<=(2*n-1); i+=2){
r+= i;
printf("%i\n",r);
}
return 0;
}
