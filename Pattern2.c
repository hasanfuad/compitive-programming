#include <stdio.h>

int main()
{
    int i,row=5,j;
    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            printf(" ");
        }
        for(j = i; j <= row; j++){
            printf("*");
        }
        
        printf(" \n");
    }

    return 0;
}