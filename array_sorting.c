#include <stdio.h>

int main()

{ 
    int umar[10]= {5, 2, 9, 1, 5, 6, 7, 3, 4, 8};
    
    int kafeel = 0;
    
    int zuhaib = 0;

    int aarzi = 0; 

    for (kafeel = 0; kafeel < 10 - 1; kafeel++)
    {
        for (zuhaib = 0; zuhaib < 10 - kafeel - 1; zuhaib++)

        {
            if (umar[zuhaib] > umar[zuhaib + 1])
            {
                aarzi = umar[zuhaib];
                umar[zuhaib] = umar[zuhaib + 1];
                umar[zuhaib + 1] = aarzi;
            }
        }
    }

    printf("Sorted array: ");
    for (kafeel = 0; kafeel < 10; kafeel++)
    {
        printf("%d ", umar[kafeel]);
    }
    printf("\n");

    return 0;
}