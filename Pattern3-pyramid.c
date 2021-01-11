#include <stdio.h>

int main()
{
    int i,row=5,j;
    for(i=0; i<row; i++){
       for(int j=1; j <= row-i; j++) 
       printf(" ");
       
       for(j=1; j <= 2*i-1; j++)
       printf("*");
       printf("\n");
    }

    return 0;
}