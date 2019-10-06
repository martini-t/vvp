
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
#include <stdio.h>
 
int main(void)
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int r=a[1]-a[0];
    for (i=1; i<n && r!=0; ++i) {
        if (r!=a[i]-a[i-1]) {
            r=0;
        }
    }
 
    printf("%i\n: ",r);
    return 0;
}