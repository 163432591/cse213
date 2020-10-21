#include<stdio.h>
int main() {
    int a;
    unsigned int f;
    short int b;
    unsigned short int g;
    long int c;
    unsigned long int h;
    long long int d;
    unsigned long long int i;
    char e;




    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of unsigned int: %u bytes\n", sizeof(f));
    printf("Size of short int: %hd bytes\n", sizeof(b));
    printf("Size of unsigned short int: %hu bytes\n", sizeof(g));
    printf("Size of long int: %ld bytes\n", sizeof(c));
    printf("Size of unsigned long int: %lu bytes\n", sizeof(h));
    printf("Size of long long int: %lld bytes\n", sizeof(d));
    printf("Size of unsigned long long int: %lld bytes\n", sizeof(i));
    printf("Size of character: %zu bytes\n", sizeof(e));





    return 0;
}

