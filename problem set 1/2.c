/*
Problem No 2:List all fload and double data types memory size in byte modes.
Name:Rafeul Anam Udoy
Id:163432591
*/
#include<stdio.h>
int main() {
    float  a;
    double b;
    long double c;

    printf("Size of float : %ld bytes\n", sizeof(a));
    printf("Size of double: %ld bytes\n", sizeof(b));
    printf("Size of long double: %ld bytes\n", sizeof(c));
    return 0;


}
