#include <stdio.h>

int main(void) {
	printf("<3���� �ǽ�4> \n"); //scanf �ǽ� 3

	char name[15]; //�̸��Է�
	printf("�̸� �Է� : "); 
	scanf_s("%s", name, sizeof(name));

	char major[15]; //�а��Է�
	printf("�а� �Է� : ");
	scanf_s("%s", major, sizeof(major));

	char bd[15]; //�����Է�
	printf("���� 6�ڸ� �Է� : ");
	scanf_s("%s", bd, sizeof(bd));

	printf("\n");  //��°�
	printf("�̸� : %s \n", name, sizeof(name));
	printf("�а� : %s \n", major, sizeof(major));
	printf("���� : %s \n", bd, sizeof(bd));

}