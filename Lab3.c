
// Name: David Morgensztern
// Date 9/7/24
// Class CS1050
// Lab3



#include <stdio.h>

int main(void)
{
    int iterations = 2; 
    while(iterations < 301)
    {
        if(iterations % 2 == 0)
        {
            if(iterations % 3 == 0 && iterations % 5 == 0)
            {
                printf("TrumanTiger%d ", iterations);
            }
            else if(iterations % 5 == 0)
            {
                printf("Truman%d ", iterations);
            }
            else if(iterations % 3 == 0)
            {
                printf("Tiger%d ", iterations);
            }
            else
            {
                printf("%d ", iterations);
            }
        }
       
        iterations=iterations+2;
    }
    return 0;
}
