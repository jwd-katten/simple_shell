 #include"main.h"



 char *read_line(void)
 {
    char *lineptr = NULL;
    size_t len = 0; 
    ssize_t nread;
    
    
    nread = getline(&lineptr, &len, stdin);
    
    if (nread == -1)
        return (NULL);

        printf("jdjd");
        
    return (lineptr);
 } 
