// Program to swap numbers without creating third variable 

#include <stdio.h>

int main()

{
     int a , b ;

     printf("Enter the first number of the two numbers to swap: ");

     scanf("%d" , &a);

     printf("Enter the second number of the two numbers to swap: ");

     scanf("%d" , &b);

     printf ("The two numbers before swap are : a=%d b=%d\n" , a , b );

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("After swap:  a = %d, b = %d\n", a, b);





}