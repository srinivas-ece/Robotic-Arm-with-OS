#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("/tmp/warehouse_fifo", O_WRONLY);
    write(fd, "PICK\n", 5);
    close(fd);
    return 0;
}
