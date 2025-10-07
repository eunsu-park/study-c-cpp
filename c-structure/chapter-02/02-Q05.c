#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void ary_reverse(int a[], int n)
{
    for(int i = 0; i < n / 2; i++) {
        printf("a[%d]와/과 a[%d]을/를 교환합니다.\n", i, n - i - 1);
        swap(int, a[i], a[n - i - 1]);
    }
    printf("역순 정렬을 종료합니다.\n");
}


int main()
{
    int nx;

    printf("요소 개수: ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));

    for(int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("배열의 요소를 역순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}