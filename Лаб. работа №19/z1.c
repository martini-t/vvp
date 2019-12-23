#include <stdio.h>

int main(void)
{
    int a[10][10];
    int m,n;

    printf("M: ");
    scanf("%i",&m);
    printf("N: ");
    scanf("%i",&n);


    int i,j;
    for (i=0; i<m; ++i){
        printf("%i : \n", i+1);
        for (j=0; j<n; ++j){
            printf("%i : ", j+1);
            scanf("%i", &a[i][j]);
        }
    }

    int max,min;

    for (i=0; i<m; ++i){
        max=min=0;
        for (j=1; j<n; ++j){
            if (a[i][j]>a[i][max]) max=j;
            if (a[i][j]<a[i][min]) min=j;
       }
       a[i][min] = a[i][max]+a[i][min];
       a[i][max] = a[i][min]-a[i][max];
       a[i][min] = a[i][min]-a[i][max];
    }

    for (i=0; i<m; ++i){
        for (j=0; j<n; ++j) printf(" : %i", a[i][j]);
        printf(" : \n");
    }
    return 0;
}