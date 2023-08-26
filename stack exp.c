#include<stdio.h>
#include<conio.h>
#define MAX5

int st_arr[MAX];
int t=-1;
void push_ele(int ele);
void pop_ele();

void main()
{
	char,choice,num1,num2;
	while(1)
	{
		printf("\n It is a Menu");
		printf("\n [1] Using push function");
		printf("\n [2] Using pop function");
		printf("\n [3] Using peep function");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\n Enetr the elements to be pushed");
					scanf("%d", num1);
					push_ele(num1);
					break;
				}
				case2:
					{
						pop_ele();
						break;
					}
					case3:
						peep_ele();
						break;
				
		}
		default:
			printf("\n Your choice is invalid");
			break;
		}
	}
	void push_ele(int ele)
	{
		if(t==MAX-1)
	{
	printf("stack is full \n");
	return;
}
str_arr[++t]=ele;
}
void pop_ele()
{
	if(t==-1)
{
	printf("\n stack is empty");
	return;
}
else
printf("\n the element is poped : %d",st_arr[t--]);
}
void peep_ele();
int i;
if(t==-1)
{
	printf(" stack is under flow \n");
	return;
	
}

		
		
	}
}
