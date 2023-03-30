#include <stdio.h>

int main(void) {
	
	int num1; // num1 정수형 변수 선언
	int num2; // num2 정수형 변수 선언

	printf("Num1 입력 : ");
	scanf_s("%d", &num1); // num1 입력받기

	printf("Num2 입력 : ");
	scanf_s("%d", &num2); // num2 입력받기


	int sum = 0; // sum 정수형 변수 선언, sum에 0 넣음

	for (int i = num1; i <= num2 ; i++) { 
		// 정수형 변수 i가 num1 부터 num2이 될 때까지 조건문 수행

		sum += i;
		// sum에 i를 더한 값을 다시 sum 에 넣음
		// 첫번째 수행 : sum = 0 + num1 
	}
	printf("%d부터 %d까지의 정수 합 : %d", num1, num2, sum);

}
