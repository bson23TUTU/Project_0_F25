// random.c
#include <stdlib.h>
#include <time.h>
#include "random.h"


void rand_string(char *s, size_t size) {
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    const size_t alpha_len = sizeof(alphabet) - 1; 

    for (size_t i = 0; i < size; i++) {
        int r = rand() % (int)alpha_len;
        s[i] = alphabet[r];
    }
    s[size] = '\0'; // null terminate
}
