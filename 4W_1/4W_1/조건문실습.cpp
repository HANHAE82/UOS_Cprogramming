# include <stdio.h>

int main(void) {

	int score; // ������ ���� ����
	printf("���� �Է� : "); // "���� �Է� : " ���
	scanf_s("%d", &score); // ���� �Է¹ޱ�

	if (score > 90) printf("����� ������ A+�Դϴ�. \n"); // 90 �ʰ� A+
	else if (score > 80) printf("����� ������ A0�Դϴ�. \n"); // 80 �ʰ� A0
	else if (score > 70) printf("����� ������ B+�Դϴ�. \n"); // 70 �ʰ� B+
	else if (score > 60) printf("����� ������ B0�Դϴ�. \n"); // 60 �ʰ� B0
	else if (score > 50) printf("����� ������ C+�Դϴ�. \n"); // 50 �ʰ� C+
	else if (score > 40) printf("����� ������ C+�Դϴ�. \n"); // 40 �ʰ� C0
	else printf("����� ������ F�Դϴ�."); // 40 ���� F

}