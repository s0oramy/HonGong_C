#include <stdio.h>

int main(void)
{
    char grade;
    char name[20];

    printf("insert grade: ");
    scanf("%c", &grade);
    printf("inser name: ");
    scanf("%s", name);  //배열에서는 &를 사용하지 않는다
    printf("%s's grade is %c.", name, grade);

    return 0;
}
