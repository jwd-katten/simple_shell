#include "main.h"

char **tokenize (char *line)
{
    char **command = NULL;
    char *token = NULL, *line_dup = NULL;
    int i = 0, nb = 0;

    line_dup = strdup(line); /* duplicate line */

    token = strtok(line_dup, DELIM);

    while (token)
    {
        nb++;
        token = strtok(NULL, DELIM);
    }
    free(line_dup), line_dup = NULL;


    command = malloc(sizeof(char*) * (i + 1));
    if (command == NULL)
    {
        free(line), line = NULL;
        return NULL;
    }
        

    token = strtok(line, DELIM);
    for (i = 0; i < nb; i++)
    {
        command[i] = token;
        token = strtok(NULL, DELIM);
    }
    command[i] = NULL;
    

    printf("%s\n", command[0]);









    return (NULL);
}
