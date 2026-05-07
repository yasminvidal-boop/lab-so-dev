/* syscall_direto.c
 * Escreve no terminal SEM usar printf.
 * A mesma syscall que o strace revelou. */
#include <unistd.h>

int main() {
    const char msg[] = "Modo usuario -> kernel via write()\n";
    write(1, msg, sizeof(msg) - 1);
    return 0;
}
