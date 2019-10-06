
#include <stdio.h>

int main(void)
{
    int a[10];
    int n,k,l;

    printf("N: ");
    scanf("%i",&n);

    printf("K: ");
    scanf("%i",&k);

    printf("L: ");
    scanf("%i",&l);

    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }

    int sum=0;
    for (i=k-1; i<=l-1; ++i) sum+=a[i];

    printf("%f\n: ",(float)sum/(float)(l-k+1));
    return 0;
}
