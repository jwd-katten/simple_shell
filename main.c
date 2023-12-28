#include"main.h"


int main(int ac, char **argv)
{

    char *line = NULL;
    char **command = NULL;
    size_t len = 0; 
    ssize_t nread;
    int status = 0;

    while (1)
    {
        write(STDIN_FILENO, "$ ", 2);
        line = read_line();
        if (!line)
            exit(status);
        
        cmd = tokenize(line);
        if (cmd == NULL)
        {

        }


    

    }
    return (0);
}
