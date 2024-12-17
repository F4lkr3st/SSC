#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[64];
    strcpy(buffer, input); // Copiere nesigură în buffer
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    vulnerable_function(argv[1]);
    printf("Program finished normally.\n");
    return 0;
}
