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

     int sum,num;
     float sred;

     for (j=0; j<n; ++j){
         sum=0;
         for (i=0; i<m; ++i) sum+=a[i][j];
         sred=sum/n;

        num=0;
        for (i=0; i<m; ++i)
            if (a[i][j]>sred) ++num;
        printf("%i, РљРѕР»-РІРѕ СЌР»РµРјРµРЅС‚РѕРІ: %i\n", i+1, num);
     }

    return 0;
}