#include <stdio.h>

char shell_string[] = "/bin/sh";

int main() {
    printf("Shell string is located at: %p\n", shell_string);
    return 0;
}
