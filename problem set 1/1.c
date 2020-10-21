/*
Problem No 1:List all character and integer data types maximum and minimum value memory can store(use limit.h)
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
#include <limits.h>

int main() {

    printf("Minimum value of int %d\n", INT_MIN);
    printf("Maximum value of int %d\n", INT_MAX);
    printf("Maximum value of unsigned int %u\n", UINT_MAX);

    printf("Minimum value of short int %d\n", SHRT_MIN);
    printf("Maximum value of short int %d\n", SHRT_MAX);
    printf("Maximum value of unsigned short int %d\n", USHRT_MAX);

    printf("Minimum value of long int %ld\n", LONG_MIN);
    printf("Maximum value of long int %ld\n", LONG_MAX);
    printf("Maximum value of unsigned long int %lu\n", ULONG_MAX);

    printf("Minimum value for char %d\n", CHAR_MIN);
    printf("Maximum value for char %d\n", CHAR_MAX);
    printf("Maximum value for unsigned char %d\n", UCHAR_MAX);


    return(0);


}

