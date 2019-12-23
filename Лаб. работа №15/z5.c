#include <stdio.h>
int swap(float *f1, float *f2){
    *f1+=*f2;
    *f2=*f1-*f2;
    *f1=*f1-*f2;
    return 0;
}
 
int main(void)
{
    float a[10];
 
    int n;
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%f",&a[i]);
    }
 
    for (i=1; i<n; ++i){
        if (a[i-1]>a[i]) {
            swap(&a[i-1], &a[i]);
        }
        else break;
    }
    printf("A: \n");
    for (i=0; i<n; ++i) printf("  %i: %f\n",i+1,a[i]);
 
    return 0;
}