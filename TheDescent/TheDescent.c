#include <stdio.h>

int main() 
{
    // game loop
    while (1) 
    {
        int max_height = 0; 
        int target_index = 0;
        int mountain_h;

        for (int i = 0; i < 8; i++) 
        {
            scanf("%d", &mountain_h);   
            if (mountain_h > max_height) 
            {
                max_height = mountain_h;
                target_index = i;
            }
        }
        printf("%d\n", target_index);
    }
    return 0;
}