#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //size of returns proper value for whatever in memory regardless of machine
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;

    // this is buggy. doesnt start at 0, no null terminator?
    // but it still compiles and runs.
    // also didnt call free.
    // terminal window will not catch all these

    // but valgrind ./memory will

    ==23938== Invalid write of size 4
    // writeing means changing
    // size 4 means and interger, cuz thats their size
    ==23938==    at 0x109170: main (memory.c:10)
    // the above tells you there was an invalid write and where...
    // in this case, memory.c at line 10
    // so x[3] = 33;

    // what would fix this error is...
    int *x = malloc(3 * sizeof(int));
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    // there is another error though...

    ==23938== 12 bytes in 1 blocks are definitely lost in loss record 1 of 1
    ==23938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
    ==23938==    by 0x109151: main (memory.c:7)
    // this is describing a memory leak... or losing bytes generally by not freeing the memory
    // this points to the line, memory.c at line 7
    // which is int *x = malloc(3 * sizeof(int));
    // so valgrind knows malloc has been called, but hasn't seen it freed.

    to fix this...

    free(x); // when you are no longer accessing the variable

    // after fixing it, valgrind will say no leaks are possible.

}
