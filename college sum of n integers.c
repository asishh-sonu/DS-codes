#include<stdio.h>

int main() {


  int arr[60], size, i, sum = 0;
  printf("enter the size\n");
  scanf("%d", &size);
  
  printf("enter the array elements\n");
  
  
  for(i =0; i<size; i++)
  {
  
  scanf("%d",&arr[i]);

  
  
  for(i =0; i < size; i++)
  sum = sum + arr[i];
}
  printf("sum of the array = %d\n",sum);
  
  return 0;
}
