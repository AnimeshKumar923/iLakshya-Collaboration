#include <stdio.h>
#include <string.h>

char hello(int);

int main()
{
    int num;
    printf("enter number of times you want to print hello world: ");
    scanf("%d", &num);

    hello(num);
}

char hello(int num)
{
    int i = 0;
    while (i < num)
    {
        printf("Hello World!\n");
        i++;
    }
}