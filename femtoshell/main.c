#include<stdio.h>

#include "rand.h"
#include "fact.h"
#include "fib.h"

int main()
{
    char msgInput[256];
    char exit[] = "exit\n";
    while(1)
    {
        printf("FemtoShell> ");
        fgets(msgInput, 256, stdin);

        if(strcmp(msgInput, exit) == 0) 
        {
            printf("You said: %s", msgInput);
            printf("Exiting FemtoShell...\n");
            break;
        }
        else if(strcmp(msgInput, "rand\n") == 0){
            myrand();
        }
        else if (strcmp(msgInput, "fact\n") == 0)
        {
            printf("Enter a number: ");
            int input;
            scanf("%d",&input);
            char x;
            scanf("%c", &x);
            printf("Result is: %lld", fact(input));
            printf("\n");
        }
        else if(strcmp(msgInput, "fib\n") == 0)
        {
            printf("Enter a number: ");
            int input;
            scanf("%d",&input);
            char x;
            scanf("%c", &x);
            printf("The sequence is: ");
            for (int i=0;i<input;i++){
                printf("%ld, ",fib(i));
            }
            printf("%ld",fib(input));
            printf("\n");
        }
        else
        {
            printf("You said: %s", msgInput);
        }
    }
    return 0;
}