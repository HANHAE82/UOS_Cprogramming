#include <stdio.h>
#include <stdbool.h>
#include "myheader.h"

void main() {


    // 1. 정수 자료형을 파라미터로 하는 함수 테스트

    int a = gcd(12, 8);
    printf("%d\n\n", a);            // 12와 8의 최대공약수 4 출력

    int b = lcm(12, 8);
    printf("%d\n\n", b);            // 12와 8의 최소공배수 24 출력

    bool c = is_prime(7);
    printf("%d\n\n", c);            // 7은 소수이므로 1 출력




    // 2. 파라미터 없이 수를 scanf로 받는 함수 테스트

    gcd_input();                // 최대공약수, 숫자 입력 받아 출력

    lcm_input();                // 최소공배수, 숫자 입력 받아 출력

    is_prime_input();           // 소수, 숫자 입력 받아 True/ False 출력


}