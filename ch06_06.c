//
//  ch06_06.c
//
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[1024];
    char *name, *job;
    
    printf("Input your name : ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strlen(buffer)-1] = NULL;
    name = strdup(buffer);
    
    printf("What do you do? ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strlen(buffer)-1] = NULL;
    job = strdup(buffer);

    printf("Hello, ");
    puts(name);
    printf("%s is a nice job.", job);
    
    free(name);
    free(job);
    return 0;
}