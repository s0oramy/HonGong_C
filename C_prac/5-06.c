#include <stdio.h>

int main(void)
{
    int a, b;
    int res;
    char c;

    printf("사칙연산 입력(정수): ");
    scanf("%d%c%d", &a, &c, &b);

    if(c == '+')
    {
	res = a + b;
    }
    else if(c == '-')
    {
	res = a - b;
    }
    else if(c == '*')
    {
	res = a * b;
    }
    else
    {
	res = a / b;
    }

    printf("%d%c%d=%d\n", a, c, b, res);

    return 0;
}
