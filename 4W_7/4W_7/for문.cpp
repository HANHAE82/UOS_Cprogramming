#include <stdio.h>

int main(void) {
	
	int num; // num 정수형 변수 선언

	printf("출력할 구구단 단수 입력 : ");
	scanf_s("%d", &num); // num 입력 받기

	for (int i = 1; i <= 9; i++) {
		// 정수형 변수 i가 1부터 9가 될 때까지 조건문 수행
		// 한 번 수행 후, i값 1증가

		printf(" %d X %d = %d \n", num, i, num * i);
		// i번째 구구단 출력 -> for문 돌면서 1에서 9까지 9번 수행

	}
}