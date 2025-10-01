#include <stdio.h>

void nrpira(int n)
{
    for(int i = 1; i <= n; i++) {
        int numbers = 2 * (n - i) + 1;
        int spaces = i - 1;
        for(int j = 1; j <= spaces; j++) {
            putchar(' ');
        }
        for(int j = 1; j <= numbers; j++) {
            putchar('0' + i);
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
    nrpira(n);

    return 0;
}