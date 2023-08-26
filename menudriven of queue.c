 #include <stdio.h>  
     #include <stdlib.h>  
     #define MAX 100  
     int queue_arr[MAX];  
     int rear=-1;  
     int front=-1;  
     void Enqueue(int item);  
     int Delqueue();  
     int peek();  
     void display();  
     int isFull();  
     int isEmpty();  
     main()  
     {  
       int choice,item;  
       while(1)  
       {  
         system("cls");  
         printf("1.Enqueue\n");  
         printf("2.Dequeue\n");  
         printf("3.Peek\n");  
         printf("4.Display all elements of the queue\n");  
         printf("5.Quit\n");  
         printf("Enter your choice:");  
         scanf("%d",&choice);  
         switch(choice)  
         {  
           case 1:printf("Enter the elements of queue:");  
               scanf("%d",&item);  
               Enqueue(item);  
               break;  
           case 2:item=del();  
              if(item!=-1)  
              {  
               printf("Deleted item is %d\n",item);  
              }  
               break;  
           case 3:printf("Elements at the front is %d\n",peek());  
              break;  
            case 4:display();  
               break;  
            case 5:exit(1);  
               break;  
            default:printf("Invalid entry\n");  
         }  
         getch();  
       }  
     }  
     void Enqueue(int item)  
     {  
       if(isFull())  
       {  
         printf("queue is overflow\n");  
         return;  
       }  
       if(front==-1)  
       {  
         front=0;  
       }  
       rear=rear+1;  
       queue_arr[rear]=item;  
     }  
     int del()  
     {  
       int item;  
       if(isEmpty())  
       {  
         printf("Queue is underflow");  
         return -1;  
       }  
       else{  
       item=queue_arr[front];  
       front++;  
       return item;  
       }  
     }  
     int peek()  
     {  
       if(isEmpty())  
       {  
         printf("Queue is underflow");  
         return;  
       }  
       return queue_arr[front];  
     }  
     int isEmpty()  
     {  
       if(front==-1 || front==rear+1)//front=rear+1 this condition is evaluates true when we have delete the last element of the queue then rear =-1 and front remains zero thats why this condition founds true.  
       {  
         return 1;  
       }  
       else  
       {  
         return 0;  
       }  
     }  
     int isFull()  
     {  
       if(rear==MAX-1)  
       {  
         return 1;  
       }  
       else  
       {  
         return 0;  
       }  
     }  
     void display()  
     {  
       int i;  
       if(isEmpty())  
       {  
         printf("Queue is empty\n");  
         return;  
       }  
       printf("Queue is : ");  
       for(i=front;i<=rear;i++)  
       {  
         printf(" %d",queue_arr[i]);  
       }  
       printf("\n");  
     } 
