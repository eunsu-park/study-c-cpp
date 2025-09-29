#include <stdio.h>

int main(void)
{
    int n;

    printf("정수: ");
    scanf("%d", &n);
    if(n == 1)
        puts("A");
    else if(n == 2)
        puts("B");
    else if(n == 3)
        puts("C");
    else
        ;

    return 0;
}