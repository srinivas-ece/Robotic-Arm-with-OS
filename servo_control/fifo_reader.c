#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[50];
    int fd = open("/tmp/warehouse_fifo", O_RDONLY);
    read(fd, buffer, sizeof(buffer));
    printf("Command: %s", buffer);
    close(fd);
    return 0;
}
