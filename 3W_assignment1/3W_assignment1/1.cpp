#include <Stdio.h>
int main(void) {

	//3주차 과제1 : Scanf 실습
	char name[15]; //char type 
	printf("이름 입력 : "); 
	scanf_s("%s", name, sizeof(name)); //name 입력값 받기

	char bd[15]; //char type
	printf("생년월일 입력 : ");
	scanf_s("%s", bd, sizeof(bd)); //bd 입력값 받기

	char num[15]; //char type
	printf("학번 입력 : ");
	scanf_s("%s", num, sizeof(num)); //num 입력값 받기

	char major[30]; //char type
	printf("학과 입력 : ");
	scanf_s("%s", major, sizeof(major)); //major 입력값 받기

	printf("\n");
	printf("이름 : %s \n", name); //이름 출력
	printf("생년월일 : %s \n", bd); //생년월일 출력
	printf("학번 : %s \n", num); //학번 출력
	printf("학과명 : %s \n", major); //학과명 출력
}