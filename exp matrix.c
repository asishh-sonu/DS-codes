#include <stdio.h>    
void main ()    
{    
    int arr[5][5],i,j;     
    for (i=0;i<5;i++)    
    {    
        for (j=0;j<5;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<5;i++)    
    {    
        printf("\n");    
        for (j=0;j<5;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}
