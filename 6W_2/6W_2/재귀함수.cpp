#include <stdio.h>

int factorial(int num) {

    int result = 1;

    if (num == 0 || num == 1) {
        return 1;
    }

    result = num * factorial(num - 1);
    return result;

}

int main()
{
    int a;
    printf("����� ���丮�� �� �Է� : ");
    scanf_s("%d", &a);
    int b = factorial(a);
    printf("%d! = %d\n", a, b);
}
