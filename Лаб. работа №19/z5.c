#include <stdio.h></stdio.h>
#define M 4
 
int main(void){
    int i, j, s;
    int A[M][M] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,0,2,4},
        {3,5,7,1}
    };
 
    for(i = 0; i < M; ++i){
        s = 0;
        for(j = i; j >= 0; --j){
            printf("%d ", A[i - j][j]);
            s += A[i - j][j];
        }
        printf(" sum: %d\n", s);
    }
 
    for(j = 1; j < M; ++j){
        s = 0;
        for(i = j; i < M; ++i){
            printf("%d ", A[i][M - 1 - (i - j)]);
            s += A[i][M - 1 - (i - j)];
        }
        printf(" sum: %d\n", s);
    }
    getchar();
    return 0;
}