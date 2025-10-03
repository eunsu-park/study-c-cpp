#include <stdio.h>

int main()
{
    int prime[500];
    int ptr = 0;
    unsigned long counter = 0;
    prime[ptr++] = 2;
    
    for(int n = 3; n <= 1000; n += 2) {
//     for(int n = 3; n <= 1000; n+= 2) {
//         for(int i = 1; i < ptr; i++) {
//             counter++;
//             if(n % prime[i] == 0)
//                 break;
//         }
        int is_prime = 1;  // 소수라고 가정
        for(int i = 1; i < ptr; i++) {
            counter++;
            if(n % prime[i] == 0) {
                is_prime = 0;  // 소수가 아님
                break;
            }
        }
//         if(ptr == 1)
//             prime[ptr++] = n;        
        if(is_prime)  // 소수이면 추가
            prime[ptr++] = n;
    }
    
    for(int i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);
    printf("나눗셈을 실행한 횟수: %lu\n", counter);

    return 0;
}