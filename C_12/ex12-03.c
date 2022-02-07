#include <stdio.h>

int main(void)
{
    char str[80];

    printf("insert: ");  //ex: apple jam
    scanf("%s", str);
    printf("first word: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 second word: %s\n", str);

    return 0;
}
