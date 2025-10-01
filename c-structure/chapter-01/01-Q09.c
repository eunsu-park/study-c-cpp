#include <stdio.h>

int sumof(int a, int b)
{
    int low, high;
    int sum = 0;

    if(a >= b) {
        low = b;
        high = a;
    }
    else {
        low = a;
        high = b;
    }

    for(int i=low; i <= high; i++)
        sum += i;

    printf("%d부터 %d까지의 총합은 %d입니다.\n", low, high, sum);


    return sum;

}

int main(void)
{
    int a, b;
    int sum = 0;
    
    puts("두 정수 a와 b를 포함하여 그 사이 모든 정수의 총합을 구합니다.");
    printf("a값: "); scanf("%d", &a);
    printf("b값: "); scanf("%d", &b);

    sum = sumof(a, b);
    
    return 0;
}