#include <stdio.h>

int main(){
    printf("this is a triangle");

    //the tip of this exe is the loop in other loop
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; i <= 10; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        
    }
    
 

    return 0;
}
