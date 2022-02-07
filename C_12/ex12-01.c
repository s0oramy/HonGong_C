#include <stdio.h>

int main(void)
{
    printf("apple이 저장된 시작 주소값: %p\n", "apple");       //주소값 출력
    printf("apple이 저장된 second  주소값: %p\n", "apple" + 1);//주소값 출력
    printf("first alphabet: %c\n", *"apple");                  //간접 참조 연산
    printf("second alphabet: %c\n", *("apple" + 1));           //포인터 연산식
    printf("배열로 표현된 세번 째 문자: %c\n", "apple"[2]);    //배열 표현식

    return 0;
}
