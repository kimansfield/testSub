/*
 * this wraps a posix open to test submodules
 *
 */

#include "openWrap.h"

int wOpen(char *fName)
{
    return open(fName, O_RDONLY);
}

int wClose(int fd)
{
    return close(fd);
}

