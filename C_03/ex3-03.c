#include <stdio.h>

int main(void)
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short형: %d\n", sh);
    printf("int형 : %d\n", in);
    printf("long형 : %ld\n", ln);
    printf("long long형: %lld\n", lln);

    return 0;
}
