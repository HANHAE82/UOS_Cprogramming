#include <stdio.h>
#include <stdbool.h>
#include "myheader.h"

void main() {


    // 1. ���� �ڷ����� �Ķ���ͷ� �ϴ� �Լ� �׽�Ʈ

    int a = gcd(12, 8);
    printf("%d\n\n", a);            // 12�� 8�� �ִ����� 4 ���

    int b = lcm(12, 8);
    printf("%d\n\n", b);            // 12�� 8�� �ּҰ���� 24 ���

    bool c = is_prime(7);
    printf("%d\n\n", c);            // 7�� �Ҽ��̹Ƿ� 1 ���




    // 2. �Ķ���� ���� ���� scanf�� �޴� �Լ� �׽�Ʈ

    gcd_input();                // �ִ�����, ���� �Է� �޾� ���

    lcm_input();                // �ּҰ����, ���� �Է� �޾� ���

    is_prime_input();           // �Ҽ�, ���� �Է� �޾� True/ False ���


}