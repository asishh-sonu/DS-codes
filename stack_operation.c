#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();


int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display the top element\n");
                printf("4.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n", peek() );
                        break;
                 
                 case 4	:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/

        return 0;

}/*End of main()*/

void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}/*End of push()*/

int pop()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}/*End of pop()*/

int peek()
{
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}/*End of peek()*/

int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}/*End of isEmpty*/

int isFull()
{
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}/*End of isFull*/


