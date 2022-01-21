#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "Strawberry";

    printf("딸기 : %s\n", fruit);
    strcpy(fruit, "banana");
    printf("딸기 : %s\n", fruit);

    return 0;
}
