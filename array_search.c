#include <stdio.h>

int main()
{
    int umar[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int hadi = 5;

    int zuhaib = 0;

    for (zuhaib = 0; zuhaib < 10; zuhaib++)
    {
        if (umar[zuhaib] == hadi)
        {
            printf("Element found at index: %d\n", zuhaib);
            
            break; 
    
        }

        if (zuhaib == 9)
        {
            printf("Element not found in the array.\n");
        }
    }
}
