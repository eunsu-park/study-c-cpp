#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    
    puts("1부터 n까지의 총합을 구합니다.");
    do {
        printf("n값: ");
        scanf("%d", &n);
    } while(n <= 0);
    for(int i = 1; i <= n; i ++)
        sum += i;
    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);

    return 0;
}