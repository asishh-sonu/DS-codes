#include<stdio.h>

int main()
{
    
    int n, sum = 0, i, array[100];

    printf("Enter the array element: ");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];  
    }

    printf("Sum = %d", sum);
    
    return 0;
}
