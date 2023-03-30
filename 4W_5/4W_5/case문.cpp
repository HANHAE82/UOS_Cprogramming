#include <stdio.h>

int main(void) {

	char opt; //opt 변수 선언

	printf("코너 입력 : ");
	scanf_s("%c", &opt,1);

	switch (opt) {
	case 'A': // A코너
		printf("오늘의 A코너 학식은 라면 입니다.");
		break;
	case 'B' : // B코너
		printf("오늘의 B코너 학식은 치킨텐더샐러드 입니다.");
		break;
	case 'C': // C코너
		printf("오늘의 C코너 학식은 나물비빔밥 입니다.");
		break;
	case 'D': // D코너
		printf("오늘의 D코너 학식은 동파육 입니다.");
		break;
	default:
		printf("error");
	}
}