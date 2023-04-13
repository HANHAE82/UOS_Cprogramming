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
    printf("계산할 팩토리얼 값 입력 : ");
    scanf_s("%d", &a);
    int b = factorial(a);
    printf("%d! = %d\n", a, b);
}
