#include <stdio.h>

int main(void) {
	printf("<3주차 실습 3-1> \n"); //scanf 실습1
	double num1, num2;
	printf("숫자 1 입력 : ");
	scanf_s("%lf", &num1);
	printf("숫자 2 입력 : ");
	scanf_s("%lf", &num2);
	printf("%g - %g = %g 입니다. \n\n", num1, num2, num1 - num2);

	printf("<3주차 실습 3-2> \n"); //scanf 실습2
	int num3, num4;
	printf("숫자 1 입력 : ");
	scanf_s("%d", &num3);
	printf("숫자 2 입력 : ");
	scanf_s("%d", &num4);
	printf("몫 : %d, 나머지 : %d", num3 / num4, num3 % num4);
}