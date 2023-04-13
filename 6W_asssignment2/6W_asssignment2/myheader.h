#include <stdio.h>
#include <stdbool.h>

// 최대공약수를 구하는 함수 (두 수의 GCD를 반환)
int gcd(int a, int b);

// 최대공약수를 구하는 함수 (사용자로부터 두 수를 입력받고, GCD를 출력)
void gcd_input();

// 최소공배수를 구하는 함수 (두 수의 LCM을 반환)
int lcm(int a, int b);

// 최소공배수를 구하는 함수 (사용자로부터 두 수를 입력받고, LCM을 출력)
void lcm_input();

// 소수인지 판별하는 함수 (소수인 경우 1, 아닌 경우 0을 반환)
bool is_prime(int num);

// 소수인지 판별하는 함수 (사용자로부터 숫자를 입력받고, 소수인지 판별 결과를 출력)
void is_prime_input();