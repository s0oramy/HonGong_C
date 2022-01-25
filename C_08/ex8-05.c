#include <stdio.h>
#include <string.h> // 문자열 관련 함수 우너형을 모아놓은 헤더파일

int main(void)
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger"); //strcpy(저장될 배열명, 저장할 문자열)
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);

    return 0;
}
