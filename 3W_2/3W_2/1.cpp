#include <Stdio.h>

int main(void) {

	printf("<3주차 실습2>\n"); //printf함수 및 서식문자 실습

	char var1[] = "양희은"; //char type
	int var2 = 2022810021; //int type
	double var3 = 4.20; //double type

	printf("서울시립대학교\n");
	printf("전자전기컴퓨터공학부\n");

	printf("이름 : %s \n", var1);
	printf("학번 : %d \n", var2);
	printf("학점 : %3.2lf", var3); // %3.2lf 3칸의 공간을 확보해놓고 소수점 둘째자리 까지만 표현
}