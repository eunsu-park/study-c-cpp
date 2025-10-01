#include <stdio.h>

int main(void)
{
    int n;

    printf("정사각형을 출력합니다.\n");
    do {
        printf("입력할 수?: ");
        scanf("%d", &n);
    } while(n <= 0);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}