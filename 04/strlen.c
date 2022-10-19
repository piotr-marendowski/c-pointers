/*  Name: strlen.c
    Author: NiceMan1337 
    Date: 19.10.2022  */

#include <stdio.h>

int strlen(const char *string);

int main()
{
    char strA[] = "Hello world!";
    printf("String: %s is %d characters long.\n", strA, length(strA));

    return 0;
}

int length(const char *string)
{
    int len;

    while (*string++)
    {
        len++;
    }

    return len;
}
