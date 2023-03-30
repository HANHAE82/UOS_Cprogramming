#include <stdio.h>

int main(void) {

	int x; // x 변수 선언
	int y; // y 변수 선언

	printf("x좌표를 입력하시오 : ");
	scanf_s("%d", &x); // x 입력 받기

	printf("y좌표를 입력하시오 : ");
	scanf_s("%d", &y); // y 입력 받기
	

	if (x > 0 and y > 0) printf("해당 좌표는 제 1사분면 위에 있습니다.");
	// x 양수 이고 y 양수 인 경우, 제 1사분면

	else if (x < 0 and y > 0) printf("해당 좌표는 제 2사분면 위에 있습니다.");
	// x 음수 이고 y 양수 인 경우, 제 2사분면

	else if (x < 0 and y < 0) printf("해당 좌표는 제 3사분면 위에 있습니다.");
	// x 음수 이고 y 음수 인 경우, 제 3사분면

	else if (x > 0 and y < 0) printf("해당 좌표는 제 4사분면 위에 있습니다.");
	// x 양수 이고 y 음수 인 경우, 제 4사분면

	else if (x == 0 and y != 0) printf("해당 좌표는 y축 위에 있습니다.");
	// x가 0 이고 y!=0 인 경우, y축 위

	else if (x != 0 and y == 0) printf("해당 좌표는 x축 위에 있습니다.");
	// x!=0 이고 y가 0 인 경우, x축 위

	else printf("해당 좌표는 원점입니다.");
	// 나머지 (0,0) 이므로 원점

}