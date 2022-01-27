//포인터 없이 두 변수의 값을 바꾸는 함수는 가능할까? -> NO
// 02_변수의 값을 인수로 주는 경우 -> swap 함수에서는 복사본을 바꾸는 것, main은 변함 없음

#include <stdio.h>

void swap(int x, int y);

int main(void)
{
    int a = 10, b = 20;

    swap(a, b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
