#include <stdio.h>

int main(void)
{
    int age;
    char name[20];

    printf("나이 입력: ");
    scanf("%d", &age);

    printf("나이 입력: ");
    gets(name);
    printf("age: %d, name: %s\n", age, name);

    return 0;
}
