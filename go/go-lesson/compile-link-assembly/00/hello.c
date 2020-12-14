#include <stdio.h>
#include <stdlib.h>

#define HELLO "hello, world!\n"

int main(int argc, char **argv)
{
    #ifdef XXX
    printf("xxx");
    #endif

    // hello, world!
    printf(HELLO);

    return 0;
}
