#include <stdio.h>

int main(void)
{
    int n;

    printf("정수: ");
    scanf("%d", &n);
    if(n > 0)
        printf("양수입니다.\n");
    else if(n < 0)
        printf("음수입니다.\n");
    else
        printf("0입니다.\n");

    return 0;
}