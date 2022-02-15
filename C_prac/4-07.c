#include <stdio.h>

int main(void)
{
    double kg, cm, bmi;
    int res;

    printf("몸무게(kg)와 키(cm)입력: ");
    scanf("%lf %lf", &kg, &cm);
    bmi = kg / (cm * cm);

    res = (20.0 <= bmi) && (bmi < 25.0);
    printf("%s\n", (res == 1) ? "표준입니다":"체중관리가 필요");

    return 0;
}

