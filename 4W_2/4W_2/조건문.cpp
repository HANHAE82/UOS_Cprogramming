# include <Stdio.h>

int main(void) {

	int opt; // opt ���� ����
	printf("���ϴ� ����� �Է��Ͻÿ�.\n");
	printf("1. ���ϱ� 2. ���� 3. ���ϱ� 4. ������ \n");
	
	printf("��� : ");
	scanf_s("%d", &opt); // opt �Է¹ޱ�

	double num1; // num1 ���� ����
	double num2; // num2 ���� ����

	printf("���� 1�� �Է��ϼ��� : ");
	scanf_s(" %lf", &num1);

	printf("���� 2�� �Է��ϼ��� : ");
	scanf_s(" %lf", &num2);

	if (opt == 1) printf(" %lf + %lf = %lf", num1, num2, num1 + num2);
	// 1 �Է½� ���� ����
	else if (opt == 2) printf(" %lf - %lf = %lf", num1, num2, num1 - num2);
	// 2 �Է½� ���� ����
	else if (opt == 3) printf(" %lf * %lf = %lf", num1, num2, num1 * num2);
	// 3 �Է½� ���� ����
	else if (opt == 4) printf(" %lf / %lf = %lf", num1, num2, num1 / num2);
	// 4 �Է½� ������ ����
}