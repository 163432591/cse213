
/*
Problem No 3:List of all float and double data types maximum and minimum value can store use(float.h)
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
#include <float.h>

int main () {
   printf("The maximum value of float = %.10e\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   printf("The maximum value of double = %.10e\n", DBL_MAX);
   printf("The minimum value of double  = %.10e\n", DBL_MIN);


}

