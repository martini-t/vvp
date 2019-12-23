#include <stdio.h>
#include <string.h>
 
int main()
{
  int l1,l2,c;
  scanf("%d %d\n",&l1,&l2);
  char s1[l1],s2[l2],*t,*st;
  gets(s1);
  gets(s2);
  st=s1;
  c=0;
  while (1) {
    t=strstr(st,s2);
    if (!t) break;
    c++;
    st=t+1;
    if (st[0] == '\0') break;
  }
  printf("%d",c);
  return 0;
}