#include <stdio.h>

void triangleLB(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleLU(int n)
{
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleRB(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        for(int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

void triangleRU(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i - 1; j++) {
            putchar(' ');
        }
        for(int j = i; j <= n; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

int main(void)
{
    int n;

    do {
        printf("몇 단 삼각형입니까?: ");
        scanf("%d", &n);
    } while(n <= 0);
    triangleLB(n);
    triangleLU(n);
    triangleRB(n);
    triangleRU(n);

    return 0;
}