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

    int amin=0,amax=0;
    for (i=0; i<n; ++i){
        if (a[amin]>a[i]) {
            amin=i;
        }
        if  (a[amax]<a[i]){
            amax=i;
        }
    }
    if (amax>amin) amax++;

    n++;
    for (i=n-1; i>=amin; --i) a[i]=a[i-1];
    a[amin]=0;

    n++;
    for (i=n-1; i>amax+1; --i) a[i]=a[i-1];
    a[amax+1]=0;

    for (i=0; i<n; ++i) printf("  %i: %i\n",i+1,a[i]);

    return 0;
}