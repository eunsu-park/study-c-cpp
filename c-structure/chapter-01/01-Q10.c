#include <stdio.h>

int main(void)
{
    int a, b;
    int sub = 0;
    
    puts("b와 a의 차를 구합니다.");
    do {
        printf("a값: "); scanf("%d", &a);
        printf("b값: "); scanf("%d", &b);
        if(a > b) printf("a보다 큰 값을 입력하세요.\n");
    } while(a > b);
    sub = b - a;
    printf("b-a는 %d입니다.\n", sub);

    return 0;
}