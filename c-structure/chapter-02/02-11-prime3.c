#include <stdio.h>

int main()
{
    int prime[500];
    int ptr = 0;
    unsigned long counter = 0;

    prime[ptr++] = 2;
    prime[ptr++] = 3;

    for(int n = 5; n <= 1000; n += 2) {
        int i ;
        int flag = 0;
        for(i = 1; counter++, prime[i] * prime[i] <= n; i++) {
            counter++;
            if(n % prime[i] == 0) {
                flag = 1;
                break;
            }
        }
        if(! flag)
            prime[ptr++] = n;
    }
    for(int i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);
    printf("곱셈과 나눗셈을 실행한 횟수: %lu\n", counter);

    return 0;
}