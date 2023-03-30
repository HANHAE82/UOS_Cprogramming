# include <stdio.h>

int main(void) {

	int score; // 정수형 변수 선언
	printf("점수 입력 : "); // "점수 입력 : " 출력
	scanf_s("%d", &score); // 점수 입력받기

	if (score > 90) printf("당신의 학점은 A+입니다. \n"); // 90 초과 A+
	else if (score > 80) printf("당신의 학점은 A0입니다. \n"); // 80 초과 A0
	else if (score > 70) printf("당신의 학점은 B+입니다. \n"); // 70 초과 B+
	else if (score > 60) printf("당신의 학점은 B0입니다. \n"); // 60 초과 B0
	else if (score > 50) printf("당신의 학점은 C+입니다. \n"); // 50 초과 C+
	else if (score > 40) printf("당신의 학점은 C+입니다. \n"); // 40 초과 C0
	else printf("당신의 학점은 F입니다."); // 40 이하 F

}