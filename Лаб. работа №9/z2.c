#include <stdio.h>
 
int main(void)
{
   int n;
   char c;
   printf("Направление:") ;
   scanf ("%c", &c);
   printf("Команда:") ;
   scanf ("%i", &n);
 
   switch (c) {
   case 'N':
       switch (n) {
       case 1:
            c='W';
            break;
       case 0:
            c='N';
            break;
       case -1:
            c='E';
            break;
       }
       break;
   case 'E':
       switch (n) {
       case 1:
            c='N';
            break;
       case 0:
            c='E';
            break;
       case -1:
            c='S';
            break;
       }
   case 'S':
       switch (n) {
       case 1:
            c='E';
            break;
       case 0:
            c='S';
            break;
       case -1:
            c='W';
            break;
       }
       break;
   case 'W':
       switch (n) {
       case 1:
            c='S';
            break;
       case 0:
            c='W';
            break;
       case -1:
            c='N';
            break;
       }
   }
   printf("%c\n",c);
   return 0;
}
