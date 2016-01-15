#include <stdio.h>
#include <string.h>
#include <stdint.h>

void rewrite(char *src) {
    src += 8;
    *src = '\0';
}

int main(int argc, char **argv) {
    char x[1024];
    strcpy(x, "hello bird");
    printf("%s", x);
    printf("\n");
    rewrite(x);
    printf("%s", x);
    printf("\n");
    return 0;
}
