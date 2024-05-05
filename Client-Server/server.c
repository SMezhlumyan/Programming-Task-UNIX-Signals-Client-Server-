#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>

void handler(int sign) {
    static char current = 0;
    static int count = 0;

    if (sign == SIGUSR2) {
        current |= (1 << (7 - count));
    }
    count++;
    if (count == 8) {
        write(1, &current, 1); 
        current = 0;
        count = 0;
    }
}

int main() {
    printf("Your pid is %d\n", getpid());

    signal(SIGUSR1, handler); 
    signal(SIGUSR2, handler); 

    while (1)
        ;

    return 0;
}
