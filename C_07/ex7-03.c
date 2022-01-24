#include <stdio.h>

// 반환값이 없는 함수는 선언과 정의의 반환형에 void 사용

void print_char(char ch, int count);

int main(void)
{
    print_char('@', 5);

    return 0;
}

void print_char(char ch, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
	printf("%c", ch);
    }

    return;
}

