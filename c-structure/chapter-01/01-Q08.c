#include <stdio.h>

int main(void)
{
    int n;
    int sum;
    
    puts("1부터 n까지의 총합을 구합니다.");
    printf("n값: ");
    scanf("%d", &n);
    sum = (1 + n) * n / 2 ;
    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    
    return 0;
}