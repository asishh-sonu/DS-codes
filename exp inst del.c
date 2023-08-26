# include<stdio.h>
int main(){
   int arr[100];
   int a;
   int k;
   int element;
   int posi;
   int posit;
   int size;
   int choice;
   printf("Enter choice : ");
   scanf("%d",&choice);
   switch(choice){
      case 1: 
      printf("Enter size : ");
      scanf("%d",&size);
      printf("array =  %d\n",size);

      for(int i=0;i<=size;i++){
         scanf("%d",&arr[i]);
      }
      printf("Enter element want you insert : ");
      scanf("%d",&element);
      printf("Enter position want you insert : ");
      scanf("%d",&posi);

      for(int i=size;i>=posi;i--){
         arr[i+1]=arr[i];
      }
      arr[posi]=element;
      printf("Final array = \n");
      for(int i=0;i<=size;i++){
         printf("%d\n",arr[i]);
      }
      break;

      case 2:
      printf("Enter size of arr = ");
      scanf("%d",&a);
      printf("Enter element of arr : ");
      for(int k=0;k<=a;k++){
         scanf("%d",&arr[k]);
      }
      printf("Enter posit : ");
      scanf("%d",&posit);
      if(posit>=a+1){
         printf("Default value\n");
      }
      else{
         for(int k=posit;k<=a-1;k++){
            arr[k]=arr[k+1];
         }
      }
      printf("Final array = \n");

      for(int k=0;k<=a-1;k++){
         printf("%d\n",arr[k]);
      }
      break;
   }
   return 0;
}
