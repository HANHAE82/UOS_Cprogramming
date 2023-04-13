#include <stdio.h>
#include <stdbool.h>
#include "myheader.h"

// 1. �ִ������� ���ϴ� �Լ� (�� ���� GCD�� ��ȯ)

int gcd(int a, int b) {
    if (b == 0) {                        // ���� b�� 0�� ���, a�� ��ȯ
        return a; 
    }
    return gcd(b, a % b);                // �׷��� ���� ���, a�� b�� ���� �������� b�� �ִ������� ���� ����� ��ȯ 
                                         // b�� 0�� �� ������ gcd �Լ� �ݺ� ȣ��
}



// 2. �ִ������� ���ϴ� �Լ� (����ڷκ��� �� ���� �Է¹ް�, GCD�� ���)

void gcd_input() {
    int a, b;
    printf("�ִ������� ���� �� ���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d %d", &a, &b);                                //����ڷκ��� �ִ������� ���� ���� �Է¹ޱ�
    int result = gcd(a, b);                                  //gcd �Լ� ȣ���Ͽ� a, b�� �ִ����� ���
    printf("%d �� %d �� �ִ�����: %d\n\n", a, b, result);
}



// 3. �ּҰ������ ���ϴ� �Լ� (�� ���� LCM�� ��ȯ)

int lcm(int a, int b) {
    int gcd_value = gcd(a, b);           //gcd �Լ� ȣ���Ͽ� a, b�� �ִ����� ���
    return (a * b) / gcd_value;          //�ּҰ���� = a*b / �ִ�����
}



// 4. �ּҰ������ ���ϴ� �Լ� (����ڷκ��� �� ���� �Է¹ް�, LCM�� ���)

void lcm_input() {
    int a, b;
    printf("�ּҰ������ ���� �� ���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%d %d", &a, &b);                              //����ڷκ��� �ּҰ������ ���� ���� �Է¹ޱ�
    int result = lcm(a, b);                                //lcm �Լ� ȣ���Ͽ� a, b�� �ּҰ���� ���
    printf("%d �� %d �� �ּҰ���� %d\n\n", a, b, result);
}



// 5. �Ҽ����� �Ǻ��ϴ� �Լ� (�Ҽ��� ��� TRUE, �ƴ� ��� FALSE�� ��ȯ)

bool is_prime(int num) {
    if (num < 2) {                           // num�� 2���� ���� ���,
        return false;                        // �Ҽ��� �ƴϹǷ� FALSE ��ȯ
    }
    for (int i = 2; i * i <= num; i++) {     // 2���� sqrt(num) ���� �������� �Ҽ� ���� �Ǻ�
        if (num % i == 0) {                  // num�� i�� ������������ (num�� i�� ���)
            return false;                    // num�� �Ҽ��� �ƴϹǷ� FALSE ��ȯ
        }
    }
    return true;                             // �׷��� ���� ���� �Ҽ��̹Ƿ� TRUE ��ȯ
}



// 6. �Ҽ����� �Ǻ��ϴ� �Լ� (����ڷκ��� ���ڸ� �Է¹ް�, �Ҽ����� �Ǻ� ����� ���)

void is_prime_input() {
    int num;
    printf("�Ҽ����� �ƴ��� �Ǻ��� ���ڸ� �Է��Ͻÿ�: "); 
    scanf_s("%d", &num);                                       //����ڷκ��� �Ǻ��� ���� �Է¹ޱ�
    if (is_prime(num)) {                                       //is_prime �Լ� ȣ��, ���� True �̸�,
        printf("%d �� �Ҽ� �Ǻ� ��� : True.\n\n", num);       // True ���
    }
    else { //���� False �̸�, 
        printf("%d �� �Ҽ� �Ǻ� ��� : False.\n\n", num);      // False ���
    }
}




