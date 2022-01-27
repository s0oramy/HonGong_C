//포이터는 가리키는 변수의 형태가 같을 때만 대입해야 함

#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    printf("%lf\n", *pd);

    return 0;
}
