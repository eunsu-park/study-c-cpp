#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void shuffle(int a[], int n)
{
    srand(time(NULL));
    
    for(int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(int, a[i], a[j]);
    }
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

    shuffle(x, nx);

    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);

    return 0;
}