#include <stdio.h>

void printLine()
{
    printf("\n----------------------------------------\n");
}

void printTitle(char title[])
{
    printLine();
    printf("%s\n", title);
    printLine();
}
