#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);  //배열 요소의 개수 계산

    for (i = 0; i < 5; i++)
    {
	scanf("%d\n",&score[i]);
    }

    for (i = 0; i < 5; i++)
    {
	total += score[i];
    }
    avg = total / (double)count;              //총합을 count로나누어 평균 계산

    for (i = 0; i < 5; i++)
    {
	printf("%5d", score[i]);
    }
    printf("\n");

    printf("avg:%.1lf\n", avg);

    return 0;
}
