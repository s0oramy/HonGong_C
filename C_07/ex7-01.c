#include <stdio.h>

int sum(int x, int y); // sum 함수 선언

int main(void)         //main 함수 시작
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b); //sum 함수 호출
    printf("result: %d\n", result);

    return 0;
}                       // main 함수의끝

int sum(int x, int y)   // sum 함수 정의 시작
{
    int temp;

    temp = x + y;

    return temp;
}
