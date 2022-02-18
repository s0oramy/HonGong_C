/* 1. 일단 소수라고 가정하는 것이 중요 (isPrime = 1)
      나누어 떨어지는 것이 있다면(isPrime = 0) 가정을 취소할 것
   2. count를 이용해 줄을 끊고 %5d로 일정 간격을 설정할 것 */

#include <stdio.h>

int main(void)
{
    int num;
    int isPrime;
    int count = 0;
    int i, j;

    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &num);

    for(i=2; i<= num; i++){
	isPrime = 1;
	for(j=2; j<i; j++){
	    if(i % j == 0){
		isPrime = 0;
		break;
	    }
	}
	if(isPrime == 1){
	    printf("%5d ", i);
	    count++;
	}
	if(count == 5){
	    count = 0;
	    printf("\n");
	}	    
    }
    return 0;
}
  
