#include <stdio.h>
#include <string.h>
#include <unistd.h>

void vulnerable_function() {
    char buffer[64];
    read(STDIN_FILENO, buffer, 256); // Buffer overflow!
}

int main() {
    vulnerable_function();
    return 0;
}
