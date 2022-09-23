#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long long fact(int num);
long fib(int n);

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
            printf("Random number: %d\n", rand());
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

long long fact(int num){
    long long fact = 1;
	/* Loop to calcuate the factorial for example (5! = 5 * 4 * 3 * 2 * 1) */
    for(int i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}
long fib(int n){
    if (n == 0 || n == 1) {
	return n;
    } 
    else {			
	return fib(n - 1) + fib(n - 2);
    }
}