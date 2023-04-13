#include <stdio.h>

//�Էµ� 10������ ����ڰ� �Է��� �������� ��ȯ�Ͽ� ����ϴ� ���α׷�

void convert(int num, int base)                     //����Լ� 'convert' �� ����
{
    if (num == 0) {
        return;
    }
    int rem = num % base;                           //�Էµ� num�� base�� ���� �������� rem�� ����
    convert(num / base, base);                      //num�� base�� ���� ���� ���ȣ��, ���ȣ���� �Ǹ� �ٽ� �������� ���ϰ� ���
    if (rem < 10) { 
        printf("%d", rem);                          //����, rem���� 10���� ���� ���, �ش簪�� �ٷ� ���
    }
    else {
        printf("%c", 'A' + (rem - 10));             //����, rem���� 10���� ū ���, �ش� ���� ���ڷ� ��ȯ�Ͽ� ���
    }
}

int main() 
{
    int num, base;
    printf("��ȯ�� 10���� �Է� : "); 
    scanf_s("%d", &num);                            //����ڷκ��� 10���� �Է��� ����
    printf("��ȯ�� ���� �Է� (2-16): ");
    scanf_s("%d", &base);                           //����ڷκ��� ��ȯ�� ���� �Է��� ����
    printf("%d�� %d���� ��ȯ �� : ",num,base); 
    convert(num, base);                             // 'convert'�Լ��� ȣ���ϰ� ����� ���
    printf("\n");
    return 0;
}
