#include <Stdio.h>
int main(void) {

	//3���� ����1 : Scanf �ǽ�
	char name[15]; //char type 
	printf("�̸� �Է� : "); 
	scanf_s("%s", name, sizeof(name)); //name �Է°� �ޱ�

	char bd[15]; //char type
	printf("������� �Է� : ");
	scanf_s("%s", bd, sizeof(bd)); //bd �Է°� �ޱ�

	char num[15]; //char type
	printf("�й� �Է� : ");
	scanf_s("%s", num, sizeof(num)); //num �Է°� �ޱ�

	char major[30]; //char type
	printf("�а� �Է� : ");
	scanf_s("%s", major, sizeof(major)); //major �Է°� �ޱ�

	printf("\n");
	printf("�̸� : %s \n", name); //�̸� ���
	printf("������� : %s \n", bd); //������� ���
	printf("�й� : %s \n", num); //�й� ���
	printf("�а��� : %s \n", major); //�а��� ���
}