#include <stdio.h>

int main(void)
{
    char str[80] = "apple jam";

    printf("first: %s\n", str);
    printf("input 문자열: ");
    scanf("%s", str);
    printf("after input: %s\n", str);

    return 0;
}
