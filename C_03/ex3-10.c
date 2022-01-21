#include <stdio.h>

int main(void)
{
    int age;
    double height;

    printf("insert age and height: ");
    scanf("%d%lf", &age, &height);
    printf("age is %d, height is %.lfcm ", age, height);

    return 0;
}
