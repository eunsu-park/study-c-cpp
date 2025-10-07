#include <stdio.h>

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

// 10진수 x를 n진수로 변환하여 d 배열에 저장
int card_conv(unsigned x, int n, char d[])
{
    char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;  // 변환된 자릿수
    
    // 변환 과정 출력 시작
    printf("%d | %10u\n", n, x);
    printf("  +----------\n");
    
    if (x == 0)
        d[digits++] = dchar[0];
    else {
        while (x) {

            d[digits++] = dchar[x % n];  // 나머지를 저장
            x /= n;  // x를 n으로 나눔

            // 변환 과정 출력
            if (x != 0) {
                printf("%d | %10u … %d\n", n, x, (int)d[digits - 1] - '0');
                printf("  +----------\n");
            }
            
        }
        
        // 마지막 몫 출력
        printf("      %10d\n", (int)d[digits - 1] - '0');
    }
    
    // 역순으로 저장되었으므로 뒤집기
    for (int i = 0; i < digits / 2; i++)
        swap(char, d[i], d[digits - i - 1]);
    
    return digits;
}

int main()
{
    puts("10진수를 기수 변환합니다.");

    int retry;

    do {
        unsigned no;
        int cd ;
        char cno[512];

        printf("변환하는 음이 아닌 정수: ");
        scanf("%u", &no);

        do {
            printf("어떤 진수로 변환할까요?(2-36): ");
            scanf("%d", &cd);
        } while (cd < 2 || cd > 36);

        int dno = card_conv(no, cd, cno);

        printf("%d 진수로는", cd);
        for(int i = 0; i < dno; i++)
            printf("%c", cno[i]);
        printf("입니다.\n");

        printf("한 번 더 할까요?(1 예/0 아니오): ");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}