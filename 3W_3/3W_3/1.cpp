#include <stdio.h>

int main(void) {
	printf("<3���� �ǽ� 3-1> \n"); //scanf �ǽ�1
	double num1, num2;
	printf("���� 1 �Է� : ");
	scanf_s("%lf", &num1);
	printf("���� 2 �Է� : ");
	scanf_s("%lf", &num2);
	printf("%g - %g = %g �Դϴ�. \n\n", num1, num2, num1 - num2);

	printf("<3���� �ǽ� 3-2> \n"); //scanf �ǽ�2
	int num3, num4;
	printf("���� 1 �Է� : ");
	scanf_s("%d", &num3);
	printf("���� 2 �Է� : ");
	scanf_s("%d", &num4);
	printf("�� : %d, ������ : %d", num3 / num4, num3 % num4);
}