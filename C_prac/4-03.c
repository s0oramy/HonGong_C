#include <stdio.h>

int main(void)
{
    int kor = 3, eng = 5, mat = 4;
    int credits;
    int res;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade;

    credits = kor + eng + mat;
    grade = (kor * kscore + eng * escore + mat * mscore) / credits;
    res = (credits >= 10) && (grade > 4.0);
    
    printf("result: %d\n", res);

    return 0;
}
