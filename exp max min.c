#include <stdio.h>
int main() {
  int i, max,min,a[5];
  

  printf("Enter the number of elements: ");

  for (int i=0; i <=5; i++) {
    scanf("%d", &a[i]);
  }
  max=a[0];
  for(int i=1; i<=5;i++){
  
  if(a[i<max]){
  	max=a[i];
  	
  }
}

min=a[0];
  for (int i = 1; i < 5; i++) {
    if (a[i] < min) {
    	min=a[i];
      
    }
  }

  printf("Largest element = %d", max);
  printf("smallest element = %d",min);

  return 0;
}
