#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;

    printf("size of int: %d\n", sizeof(a));
    printf("size of double: %d\n", sizeof(b));
    printf("size of 정수형 상수: %d\n", sizeof(10));
    printf("size of 수식의결과값 : %d\n", sizeof(1.5 + 3.4));
    printf("size of char: %d\n", sizeof(char));

    return 0;
}
