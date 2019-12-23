#include <stdio.h>

int main(void)
{
    int a[10][10];
    int m;

    printf("M: ");
    scanf("%i",&m);

    int i,j;
    for (i=0; i<m; ++i){
        printf("%i : \n", i+1);
        for (j=0; j<m; ++j){
            printf("%i : ", j+1);
            scanf("%i", &a[i][j]);
        }
    }

     int i2;
     for (i2=0; i2<m/2; ++i2){
         for (j=i2; j<m-i2; ++j){ printf(" %i", a[j][i2]);}
         for (i=i2+1; i<=m-i2-1; ++i){ printf(" %i", a[m-i2-1][i]);}
         for (j=m-i2-2; j>=i2; --j){ printf(" %i", a[j][m-i2-1]);}
         for (i=m-i2-2; i>=i2+1; --i){ printf(" %i", a[i2][i]);}
         printf("\n");
     }
     printf(" %i\n", a[m / 2][m / 2]);
    return 0;
}