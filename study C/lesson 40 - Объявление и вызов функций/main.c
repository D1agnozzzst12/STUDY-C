#include <stdio.h>

int get_per(int width, int height)
{
    int p = 2 * (width + height);
    return p;
} 


int main() 
{

    int w =2, h = 5;

    get_per(w, h);
    
    int per_1 = get_per(w + 1, h - 4);
    int per_2 = get_per(w, 3);
    int per_3 = get_per(1, 3);

    printf("per_1 = %d\t per_2 = %d\t per_3 = %d\n", per_1, per_2, per_3);
    
    

    return 0;
}