#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void emergency_handler(int sig) {
    printf("EMERGENCY STOP ACTIVATED!\n");
    exit(0);
}

int main() {
    signal(SIGINT, emergency_handler);
    while (1) {
        printf("System Running...\n");
        sleep(1);
    }
}
