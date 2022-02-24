#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char str[100];
    int count = 0;
    int i;

    printf("문장 입력: ");
    gets(str);
    for(i=0; i < strlen(str); i++){
	    if(isupper(str[i])){
		count += 1;
		str[i] = tolower(str[i]);
	    }
    }
    printf("바뀐 문장: ");
    puts(str);
    printf("바뀐 문자 수: %d\n", count);

    return 0;
}
