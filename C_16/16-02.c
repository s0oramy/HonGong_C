#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *pi;
    int i, sum = 0;

    pi = (int*)malloc(5 * sizeof(int));   //저장 공간 20바이트 할당
    if(pi == NULL){
	printf("메모리 부족\n");
	exit(1);
    }
    printf("다섯 명의 나이를 입력하시오: ");
    for(i=0; i<5; i++){
	scanf("%d", &pi[i]);             //배열 요소에 입력
	sum += pi[i];                    //배열 요소 값 누적
    }
    printf("다섯 명의 평균 나이: %.1lf\n", (sum / 5.0));
    free(pi);

    return 0;
}
