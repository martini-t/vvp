#include <stdio.h>
int main(void)
{
    int a[20],b[20];
    int n,k;
    printf("N: ");
    scanf("%i",&n);
    printf("K: ");
    scanf("%i",&k);

    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }

    int nk =1, beginkseries=1, lenkseries=(k==1?1:0), beginendseries;

    for (i=1; i<n; ++i){
        if (a[i-1]!=a[i]){
            nk++;
            if (nk==k) beginkseries=i;
            beginendseries=i;
        }
        if (nk==k) lenkseries++;
    }

    int i2=-1;
    for (i=0; i<beginkseries; ++i)  b[++i2]=a[i];

    for (i=beginendseries; i<n; ++i)  b[++i2]=a[i];

    for (i=beginkseries+lenkseries; i<beginendseries; ++i)  b[++i2]=a[i];

    for (i=beginkseries; i<beginkseries+lenkseries; ++i)  b[++i2]=a[i];

    for (i=0; i<n;++i) a[i]=b[i];

    for (i=0; i<n;++i) printf("a  %i : %i\n",i+1,a[i]);

    return 0;
}