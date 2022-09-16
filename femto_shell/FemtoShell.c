#include<stdio.h>
#include<string.h>


int main()
{
    char msgInput[256];
    char exit[] = "exit\n";
    while(1)
    {
        printf("FemtoShell> ");
        fgets(msgInput, 256, stdin);

        if(strcmp(msgInput, exit))
        {
            printf("You said: %s", msgInput);
        }
        else
        {
            printf("Exiting FemtoShell...\n");
            break;
        }
    }
    return 0;
}