#include <stdio.h>

int main(void)
{
    char *dessert = "apple";    //char 포인터 선언 후 문자열 상수로 초기화 (포인터에 문자열 초기화)

    printf("오늘 후식은 %s입니다.\n", dessert);
    dessert = "banana";        //새로운 문자열 입력
    printf("내일 후식은 %s입니다.\n", dessert);

    return 0;
}
