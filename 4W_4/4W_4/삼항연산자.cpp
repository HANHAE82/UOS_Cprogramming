#include <stdio.h>

int main (void) {

	int num; // num ���� ����

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	int result = (num % 2 == 0) ? (result = 0) : (result = 1);
	// result ���� ����, ���׿�����: (���� ? �� : ����)
	// 2�� �������� �� �������� 0�̸� result = 0, �������� 0�� �ƴϸ� result = 1

	printf("��� �� : %d", result);
	// �Է��� ������ ¦���� 0 ���, Ȧ���� 1 ���
}