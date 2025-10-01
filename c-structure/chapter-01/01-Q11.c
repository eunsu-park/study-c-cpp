#include <stdio.h>

int main(void)
{
    int n;
    int result = 0;

    puts("양의 정수 n의 자릿수를 구합니다.");
    do {
        printf("n값: "); 
        scanf("%d", &n);
        if(n < 0) printf("0보다 큰 값을 입력하세요.\n");
    } while(n < 0);
    if(n == 0) {
        result = 1;
    } else {
        int temp = n;
        while(temp > 0) {
            temp /= 10;
            result++;
        }
    }
    printf("%d의 자릿수: %d\n", n, result);

    return 0;
}