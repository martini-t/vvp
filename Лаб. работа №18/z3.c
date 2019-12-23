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

     int mult,minmult=1,minj=0;
     for (i=0; i<m; ++i) minmult*=a[i][minj];

     for (j=1; j<n; ++j){
         mult=1;
         for (i=0; i<m; ++i) mult *=a[i][j];
         if (mult<minmult){
             minmult=mult;
             minj=j;
         }
     }
    printf("%i = %i\n", minj+1,minmult);
    return 0;
}