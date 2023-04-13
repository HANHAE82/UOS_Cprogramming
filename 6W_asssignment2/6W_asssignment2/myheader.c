#include <stdio.h>
#include <stdbool.h>
#include "myheader.h"

// 1. 최대공약수를 구하는 함수 (두 수의 GCD를 반환)

int gcd(int a, int b) {
    if (b == 0) {                        // 만약 b가 0인 경우, a를 반환
        return a; 
    }
    return gcd(b, a % b);                // 그렇지 않은 경우, a를 b로 나눈 나머지와 b의 최대공약수를 구한 결과를 반환 
                                         // b가 0이 될 때까지 gcd 함수 반복 호출
}



// 2. 최대공약수를 구하는 함수 (사용자로부터 두 수를 입력받고, GCD를 출력)

void gcd_input() {
    int a, b;
    printf("최대공약수를 구할 두 숫자를 입력하시오: ");
    scanf_s("%d %d", &a, &b);                                //사용자로부터 최대공약수를 구할 숫자 입력받기
    int result = gcd(a, b);                                  //gcd 함수 호출하여 a, b의 최대공약수 계산
    printf("%d 와 %d 의 최대공약수: %d\n\n", a, b, result);
}



// 3. 최소공배수를 구하는 함수 (두 수의 LCM을 반환)

int lcm(int a, int b) {
    int gcd_value = gcd(a, b);           //gcd 함수 호출하여 a, b의 최대공약수 계산
    return (a * b) / gcd_value;          //최소공배수 = a*b / 최대공약수
}



// 4. 최소공배수를 구하는 함수 (사용자로부터 두 수를 입력받고, LCM을 출력)

void lcm_input() {
    int a, b;
    printf("최소공배수를 구할 두 숫자를 입력하시오: ");
    scanf_s("%d %d", &a, &b);                              //사용자로부터 최소공배수를 구할 숫자 입력받기
    int result = lcm(a, b);                                //lcm 함수 호출하여 a, b의 최소공배수 계산
    printf("%d 와 %d 의 최소공배수 %d\n\n", a, b, result);
}



// 5. 소수인지 판별하는 함수 (소수인 경우 TRUE, 아닌 경우 FALSE을 반환)

bool is_prime(int num) {
    if (num < 2) {                           // num이 2보다 작은 경우,
        return false;                        // 소수가 아니므로 FALSE 반환
    }
    for (int i = 2; i * i <= num; i++) {     // 2부터 sqrt(num) 까지 나눠보며 소수 여부 판별
        if (num % i == 0) {                  // num이 i로 나눠떨어지면 (num이 i의 배수)
            return false;                    // num은 소수가 아니므로 FALSE 반환
        }
    }
    return true;                             // 그렇지 않은 경우는 소수이므로 TRUE 반환
}



// 6. 소수인지 판별하는 함수 (사용자로부터 숫자를 입력받고, 소수인지 판별 결과를 출력)

void is_prime_input() {
    int num;
    printf("소수인지 아닌지 판별할 숫자를 입력하시오: "); 
    scanf_s("%d", &num);                                       //사용자로부터 판별할 숫자 입력받기
    if (is_prime(num)) {                                       //is_prime 함수 호출, 값이 True 이면,
        printf("%d 의 소수 판별 결과 : True.\n\n", num);       // True 출력
    }
    else { //값이 False 이면, 
        printf("%d 의 소수 판별 결과 : False.\n\n", num);      // False 출력
    }
}




