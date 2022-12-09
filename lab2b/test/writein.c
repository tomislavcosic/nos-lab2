#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd, count;
    unsigned long cmd;

    if (argc < 2) {
        fprintf(stderr, "Invalid num of arguments\n");
        return -1;
    }

    fd = open(argv[1], O_WRONLY);
    if (fd == -1) {
        perror("open failed");
        return -1;
    }

    while(1) {
        char buf = 'A' + (random() % 26);
        write(fd, &buf, sizeof(buf));
    }
}