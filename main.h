#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIM " \t\n"

char *read_line(void);
char **tokenize (char *line);

#endif // MACRO
