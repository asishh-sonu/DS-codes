#include<stdio.h>

int main()
{
    
    int n, sum = 0, i, array[100],avg;

    printf("Enter the array element= ");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
        avg=sum/n;
		  
    }

    printf("Sum = %d", sum);
    printf("avg=%d",avg);
    
    return 0;
}
