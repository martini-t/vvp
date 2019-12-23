#include <stdio.h>

void swap(int &x, int &y){
    if (x!=y){
        x+=y;
        y=x-y;
        x-=y;
    }
}

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

    int maxI=1, maxJ=1, minI=1, minJ=1;

    for (j=0; j<n; ++j){
        for (i=0; i<m; ++i){
            if (a[i][j]>a[maxI][maxJ]) {
                maxI=i;
                maxJ=j;
            }
            if (a[i][j]<a[minI][minJ]){
                minI=i;
                minJ=j;
            }
       }
    }

    if (minJ!=maxJ)
      for (i=0;i<m;++i){
          swap (a[i][minJ], a[i][maxJ]);
      }

    for (i=0; i<m; ++i){
        for (j=0; j<n; ++j) printf(" : %i", a[i][j]);
        printf(" : \n");
    }
    return 0;
}