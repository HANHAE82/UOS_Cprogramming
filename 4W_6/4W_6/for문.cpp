#include <stdio.h>

int main(void) {
	
	int num1; // num1 ������ ���� ����
	int num2; // num2 ������ ���� ����

	printf("Num1 �Է� : ");
	scanf_s("%d", &num1); // num1 �Է¹ޱ�

	printf("Num2 �Է� : ");
	scanf_s("%d", &num2); // num2 �Է¹ޱ�


	int sum = 0; // sum ������ ���� ����, sum�� 0 ����

	for (int i = num1; i <= num2 ; i++) { 
		// ������ ���� i�� num1 ���� num2�� �� ������ ���ǹ� ����

		sum += i;
		// sum�� i�� ���� ���� �ٽ� sum �� ����
		// ù��° ���� : sum = 0 + num1 
	}
	printf("%d���� %d������ ���� �� : %d", num1, num2, sum);

}
