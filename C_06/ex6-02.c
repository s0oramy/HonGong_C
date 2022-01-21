#include <stdio.h>

int main(void)
{
    int a = 1;
    int i;

    for (i = 0; i < 3; i++) // i는 0으로 초기화, 3보다 작으면, 하나씩 증가
    {
	a = a * 2;
    }
    printf("a: %d\n", a);

    return 0;
}
