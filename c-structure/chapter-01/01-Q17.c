#include <stdio.h>

void spira(int n)
{
    for(int i = 1; i <= n; i++) {
        int stars = (i - 1) * 2 + 1;
        int spaces = n - i;
        for(int j = 1; j <= spaces; j++) {
            putchar(' ');
        }
        for(int j = 1; j <= stars; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}

int main(void)
{
    int n;

    do {
        printf("몇 단 피라미드입니까?: ");
        scanf("%d", &n);
    } while(n <= 0);
    spira(n);

    return 0;
}