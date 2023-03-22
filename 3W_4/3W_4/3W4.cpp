#include <stdio.h>

int main(void) {
	printf("<3주차 실습4> \n"); //scanf 실습 3

	char name[15]; //이름입력
	printf("이름 입력 : "); 
	scanf_s("%s", name, sizeof(name));

	char major[15]; //학과입력
	printf("학과 입력 : ");
	scanf_s("%s", major, sizeof(major));

	char bd[15]; //생일입력
	printf("생일 6자리 입력 : ");
	scanf_s("%s", bd, sizeof(bd));

	printf("\n");  //출력값
	printf("이름 : %s \n", name, sizeof(name));
	printf("학과 : %s \n", major, sizeof(major));
	printf("생일 : %s \n", bd, sizeof(bd));

}