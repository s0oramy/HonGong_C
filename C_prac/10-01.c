#include <stdio.h>

int main(void){
    double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
    double *pa = ary;
    double *pb = ary + 2;

    for(i=0; i<3; i++){
	printf("%.1lf", *pb);
	pb++;
    }
    return 0;
}

