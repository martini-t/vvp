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


    int odd=0;

    for (i=n-1; i>=0; --i){
        if (a[i]%2!=0) {
            odd=a[i];
            break;
        }
    }

    for (; i>=0; --i){
        if (a[i]%2!=0){
            a[i]+=odd;
        }
    }

    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %i: %i\n",i+1,a[i]);

    return 0;
}