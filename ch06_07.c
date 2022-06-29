//
//  ch06_07.c
//
#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[1024];
    char *name;

    printf("Input your name : ");
    fgets(buffer, sizeof(buffer), stdin);
    name = strdup(buffer);

    printf("Are you a boy? (yes/no)");
    fgets(buffer, sizeof(buffer), stdin);
    if( strcmp(buffer, "yes") == 0 ) {
        strcpy(buffer, name);    
        strcat(buffer, ", you are a boy.");
    }
    else {
        strcpy(buffer, name);    
        strcat(buffer, ", you are not a boy.");
    }
    puts(buffer);

    free(name);
    return 0;
}