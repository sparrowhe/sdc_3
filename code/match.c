#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>
#include <assert.h>

int main(void) {
    bool success = false;
    char input[10];
    gets(input);
    if(success) {
        puts("flag");
    } else {
        puts("flag is not here");
    }
}