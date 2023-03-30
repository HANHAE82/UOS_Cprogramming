#include <stdio.h>

int main(void) {

	for (int i = 0; i < 101; i++) {
		// 정수형 변수 i가 1부터 100이 될 때까지 조건문 수행
		// 한 번 수행 후, i값 1증가

		if (i % 3 == 0 and i % 4 == 0) printf("%d ", i);
		// 3과 4의 공배수이면 i 출력
		else if (i % 7 == 0) printf("%d ", i);
		// 3과 4의 공배수가 아닌 경우, 7의 배수라면 i 출력
	}
}