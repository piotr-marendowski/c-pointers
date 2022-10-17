/*  Name: 2.1.c
    Author: Ted Jensen 
    Date: 17.10.2022  */

#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main()
{
    int i;
    /*ptr = &my_array[0];*/     /* point our pointer to the first
                                            element of the array */
    ptr = my_array;

    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %3d\t",i,my_array[i]);   /*<-- A */
        /*printf("ptr + %d = %3d\n",i,*(ptr + i));*/     /*<-- B */
        /*printf("ptr + %d = %d\n",i, *ptr++);*/
        printf("ptr + %d = %d\n",i, *(++ptr));
    }

    return 0;
}
