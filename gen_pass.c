#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 128

void gen_pass(int length) {
    const char charset[] = 
        "0123456789"
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "!@#$%^&*()-_=+[]{}|;:,.<>/?";

    int charset_size = sizeof(charset) - 1;

    if (length > MAX_LEN) length = MAX_LEN;

    char password[length + 1];

    for (int i = 0; i < length; i++) {
        int key = rand() % charset_size;
        password[i] = charset[key];
    }

    password[length] = '\0';

    printf("Generated password: %s\n", password);
}

