#include <stdio.h>

int main()
{
    int x;
    char i=1;
    for(x=1;x<=800;x++) 
    {
        printf(" %c ", i); 
        if(x==800)
        printf("\n"); 
        if(x==800)
        break;

    }
}