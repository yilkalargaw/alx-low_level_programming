#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
