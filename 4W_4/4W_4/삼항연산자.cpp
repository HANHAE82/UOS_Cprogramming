#include <stdio.h>

int main (void) {

	int num; // num 변수 선언

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	int result = (num % 2 == 0) ? (result = 0) : (result = 1);
	// result 변수 선언, 삼항연산자: (조건 ? 참 : 거짓)
	// 2로 나누었을 때 나머지가 0이면 result = 0, 나머지가 0이 아니면 result = 1

	printf("결과 값 : %d", result);
	// 입력한 정수가 짝수면 0 출력, 홀수면 1 출력
}