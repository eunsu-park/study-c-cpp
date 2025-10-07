#include <stdio.h>
#include <stdlib.h>

void ary_copy(int a[], const int b[], int n)
{
    for(int i = 0; i < n; i++)
        a[i] = b[i];
}

int main()
{
    int nx;

    printf("요소 개수: ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));
    int *y = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    ary_copy(y, x, nx);


    // ary_reverse(x, nx);
    // printf("배열의 요소를 역순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
        printf("y[%d] = %d\n", i, y[i]);

    free(x);
    free(y);

    return 0;
}