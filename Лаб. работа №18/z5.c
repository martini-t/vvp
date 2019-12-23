#include <stdio.h>
#include <math.h>

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


    int row=-1;
    for (i=m-1; i>=0; --i){

         for (j=0; (j<n) && (a[i][j]%2!=0); ++j);

         if (j==n) row=i;
    }

    printf("%i\n", row+1);

    return 0;
}