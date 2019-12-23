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


    for (i=0; i<m/2; ++i){
        for (j=0; j<n/2; ++j)
            swap(a[i][j],a[m / 2+i][n/2+j]);
    }

    for (i=0; i<m; ++i){
        for (j=0; j<n; ++j) printf(" : %i", a[i][j]);
        printf(" : \n");
    }
    return 0;
}