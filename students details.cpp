#include<iostream>
using namespace std;

class student
{
	private:
		int roll;
		char name[10];
	public:
	void input();
	void output();	
};
void student:: input()
{

 cout<<"Roll no of student"<<endl;
 cin>>"Roll no of student"<<endl;
 cout<<"Name of the student"<<endl;
 cin<<"Name of the student"<<endl;
 
}
void student :: output()
{
	cout<<"Roll no of the student="<<roll<<endl;
	cout<<"Name of the student="<<name<<endl;
}

int main()
{
int i;
student std[3];
for(i=0;i<3;i++)
{
	std[i].input();
}
	for(i=0;i<3;i++)
	{
		std[i].output();
	}
	retur 0;
}







