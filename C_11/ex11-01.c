#include <stdio.h> 

int main(void)
{
    char small, cap = 'G';             //G(71)

    if ((cap >= 'A') && (cap <= 'Z'))  // A(65)  Z(90)
    {
	small = cap + ('a' - 'A');     //대,소문자의 차이를 더해 G의 소문자로 변환
    }
    printf("대문자: %c %c", cap, '\n');
    printf("소문자: %c\n", small);

    return 0;
}
