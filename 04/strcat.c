/*  Name: strcat.c
    Author: Piotr Marendowski
    Date: 19.10.2022  */

#include <stdio.h>

char *cat(char *strA, char *strB);

int main()
{
    char strA[50] = "Hello world!";
    char strB[50] = " And have a nice day!";

    printf("Concatenated string:\n%s\n", cat(strA, strB));

    return 0;
}

/*Overcomplicated for no reason, I like it.
First declare a pointer to strA, then go over strA,
so that you can go back from \0 to last letter and
then copy letters from strB to strA (by pointer ptr)
one by one.*/
char *cat(char *strA, char *strB)
{
    char *ptr = strA;

    while (*ptr++)
        ;

    *--ptr = *strB;

    while (*strB)
        *ptr++ = *strB++;

    return strA;
}
