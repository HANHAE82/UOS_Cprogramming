#include <stdio.h>

int main(void) {
	
	int num; // num ������ ���� ����

	printf("����� ������ �ܼ� �Է� : ");
	scanf_s("%d", &num); // num �Է� �ޱ�

	for (int i = 1; i <= 9; i++) {
		// ������ ���� i�� 1���� 9�� �� ������ ���ǹ� ����
		// �� �� ���� ��, i�� 1����

		printf(" %d X %d = %d \n", num, i, num * i);
		// i��° ������ ��� -> for�� ���鼭 1���� 9���� 9�� ����

	}
}