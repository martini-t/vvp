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

    int m2=m,i2;
        for (i=0; i<m-1; ++i){
            i2=0;
            --m2;
            while (i2<m2){
                if (a[i2][0]>a[i2+1][0])
                    for (j=0;j<n; ++j) {
                        a[i2][j]+=a[i2+1][j];
                        a[i2+1][j]=a[i2][j]-a[i2+1][j];
                        a[i2][j]=a[i2][j]-a[i2+1][j];
                    }
                ++i2;
            }
        }

    for (i=0; i<m; ++i){
           for (j=0; j<n; ++j) printf(" : %i", a[i][j]);
           printf(" : \n");
       }

    return 0;
}