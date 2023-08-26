#include<iostream>
namespace std;
void swap(int&num1 ,int&num2)
{
    int tem;
    tem=num1;
    num1=num2;
    num2=tem;
}
int main()
{
    int a=5,b=10;
    cout<<"Befor swapping" <<"\n A="<<"a"<<"\n B="<<b<<endl;
    swap(a,b);
    cout<<"After swapping" <<"\n A="<<"a"<<"\n B="<<"b"<<endl;
    return 0;
}
 
