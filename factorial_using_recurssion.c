// Program to find factorial of a number using recurssion 

#include <stdio.h>



int factorial(int n) 

{
    
    if (n == 1) {
        return 1;
    }
    
   
    else {
        return n * factorial(n - 1);
    }

}

int main() 

{
    int num;

    printf("Enter a positive number to find its factorial: ");
    
    scanf("%d", &num);

    if (num < 0) 
    
    {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } 
    
    else 
    
    {
        
        int result = factorial(num);
        
        printf("The factorial of %d is: %d\n", num, result);
    }

}

