#include <stdio.h>

int main(void) {

	char opt; //opt ���� ����

	printf("�ڳ� �Է� : ");
	scanf_s("%c", &opt,1);

	switch (opt) {
	case 'A': // A�ڳ�
		printf("������ A�ڳ� �н��� ��� �Դϴ�.");
		break;
	case 'B' : // B�ڳ�
		printf("������ B�ڳ� �н��� ġŲ�ٴ������� �Դϴ�.");
		break;
	case 'C': // C�ڳ�
		printf("������ C�ڳ� �н��� ��������� �Դϴ�.");
		break;
	case 'D': // D�ڳ�
		printf("������ D�ڳ� �н��� ������ �Դϴ�.");
		break;
	default:
		printf("error");
	}
}