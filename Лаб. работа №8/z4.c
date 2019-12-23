#include <stdio.h>

int main(void)
{
float x, y;
printf("x:");
scanf ("%f", &x);
printf("y:");
scanf ("%f", &y);

if ((x>0) & (y>0)) printf("I\n");
else if ((x<0) & (y>0)) printf("II\n");
else if ((x<0) & (y<0)) printf("III\n");
else printf("IV\n");

return 0;
}