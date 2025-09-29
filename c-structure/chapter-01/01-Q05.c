#include <stdio.h>

int med3(int a, int b, int c)
{
    if((b >= a && c <= a) || (b <= a && c >= a))
        return a;
    else if ((a > b && c < b) || (a < b && c > b))
        return b;
    return c;
}

int main(void)
{
    int a, b, c;

    printf("세 정수의 중앙값을 구합니다.\n");
    printf("a값: "); scanf("%d", &a);
    printf("b값: "); scanf("%d", &b);
    printf("c값: "); scanf("%d", &c);

    printf("중앙값은 %d입니다.\n", med3(a, b, c));

    return 0;
}