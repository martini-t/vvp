
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
 
    int min = a[1];
 
    for (i=1; i<n; i+=2) {
        if (a[i]<min) min=a[i];
    }
 
    printf("%i\n",min);
 
    return 0;
}