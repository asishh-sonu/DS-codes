#include<stdio.h>
#include<conio.h>
#define max 20
int stack[max];
int top=0,x;
void push(int);
int pop();
void display();
int isempty();
int isfull();
void main()
{
int ch,item,d;
char a;
printf("\n\t Stack Implementation");
printf("\n\t --------------------");
printf("\n\t1.PUSH");
printf("\n\t2.POP");
printf("\n\t3.Display");
printf("\n\t4.IsEmpty");
printf("\n\t5.IsFull");
do{
printf("\n\t Enter Your Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter an Element to PUSH: \n");
           scanf("%d",&item);
           push(item);
           break;
case 2:x=pop();
           printf("The element POP out from Stack is %d",x);
           break;
case 3:display();
           break;
case 4:x=isempty();
          if(x==1)
          printf("Stack is Empty");
          else
          printf("Stack is Not Empty");
          break;
case 5:x=isfull();
          if(x==1)
          printf("Stack is Full");
          else
          printf("Stack is Not Full");
          break;
default:printf("INVALID Choice\n");
}
printf("\n do u want to continue y/n: ");
scanf(" %c",&a);
}while((a=='y')||(a=='Y'));
getch();
}

void push(int x)           // PUSH function
{
if(top>=max)
printf("Stack is OVERTFLOW\n");
else
{
stack[top]=x;
top++;
}
}

int pop()           // POP function
{
if(top<=0)
printf("Stack is UNDERFLOW\n");
else
{
top--;
x=stack[top];
}
return x;
}

void display()          
{
int i;
i=top-1;
if(top<=0)
printf("Stack is Empty");
else
printf("The Elments in Stack are \n");
while(i>=0)
{
printf(" %d\n",stack[i--]);
}
}

int isempty()           
{
if(top<=0)
return 1;
else
return 0;
}

int isfull()           
{
if(top>=max)
return 1;
else
return 0;
}
