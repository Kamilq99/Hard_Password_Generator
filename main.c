#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int length = 0;

    printf("Enter the length of the password: ");
    scanf("%d", &length);

    srand((unsigned int)time(NULL));

    gen_pass(length);

    return 0;
}