# include <Stdio.h>

int main(void) {

	int opt; // opt 변수 선언
	printf("원하는 기능을 입력하시오.\n");
	printf("1. 더하기 2. 빼기 3. 곱하기 4. 나누기 \n");
	
	printf("기능 : ");
	scanf_s("%d", &opt); // opt 입력받기

	double num1; // num1 변수 선언
	double num2; // num2 변수 선언

	printf("숫자 1을 입력하세요 : ");
	scanf_s(" %lf", &num1);

	printf("숫자 2을 입력하세요 : ");
	scanf_s(" %lf", &num2);

	if (opt == 1) printf(" %lf + %lf = %lf", num1, num2, num1 + num2);
	// 1 입력시 덧셈 연산
	else if (opt == 2) printf(" %lf - %lf = %lf", num1, num2, num1 - num2);
	// 2 입력시 뺄셈 연산
	else if (opt == 3) printf(" %lf * %lf = %lf", num1, num2, num1 * num2);
	// 3 입력시 곱셈 연산
	else if (opt == 4) printf(" %lf / %lf = %lf", num1, num2, num1 / num2);
	// 4 입력시 나눗셈 연산
}