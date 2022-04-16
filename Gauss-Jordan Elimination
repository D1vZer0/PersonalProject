#include <stdio.h>

int main ()
{
    int n, i, j, k, r;
    printf ("n*(n+1) augmented matrix에 대해서만 작동합니다\n");
    printf ("row의 수를 입력하세요: ");
    scanf ("%d", &n);
    printf ("------------------------------\n");
    
    double matrix [n] [n+1];
    for (i=0; i<n; i++) {
        for (j=0; j<n+1; j++) {
            scanf ("%lf", &matrix [i] [j]);
        }
        getchar();
    }
    
    for (k=0; k<n; k++) { // upper triangular form 만들기
        for (i=k+1; i<n; i++) {
            for (j=0; j<n+1; j++) {
                r = matrix [i] [k] / matrix [k] [k];
                matrix [i] [j] -= r* matrix [k] [j];
            }
        }
    }
    
    printf ("------------------------------\n"); // upper triangular form 출력하기
    for (i=0; i<n; i++) {
        for (j=0; j<n+1; j++) {
            printf ("%.2lf   ", matrix [i] [j]);
        }
        printf ("\n");
    }
    
    return 0;
}
