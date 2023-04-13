#include <stdio.h>

//입력된 10진수를 사용자가 입력한 진법으로 변환하여 출력하는 프로그램

void convert(int num, int base)                     //재귀함수 'convert' 로 구현
{
    if (num == 0) {
        return;
    }
    int rem = num % base;                           //입력된 num을 base로 나눈 나머지를 rem에 저장
    convert(num / base, base);                      //num을 base로 나눈 몫을 재귀호출, 재귀호출이 되면 다시 나머지를 구하고 출력
    if (rem < 10) { 
        printf("%d", rem);                          //만약, rem값이 10보다 작은 경우, 해당값을 바로 출력
    }
    else {
        printf("%c", 'A' + (rem - 10));             //만약, rem값이 10보다 큰 경우, 해당 값을 문자로 변환하여 출력
    }
}

int main() 
{
    int num, base;
    printf("변환할 10진수 입력 : "); 
    scanf_s("%d", &num);                            //사용자로부터 10진수 입력을 받음
    printf("변환할 진법 입력 (2-16): ");
    scanf_s("%d", &base);                           //사용자로부터 변환할 진법 입력을 받음
    printf("%d의 %d진수 변환 값 : ",num,base); 
    convert(num, base);                             // 'convert'함수를 호출하고 결과값 출력
    printf("\n");
    return 0;
}
