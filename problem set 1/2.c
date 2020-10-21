/*
Problem No 1:List all character and integer data types maximum and minimum value memory can store(use limit.h)
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
