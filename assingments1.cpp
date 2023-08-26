#include<iostream>
using namespace std;

int area(int);
int area(int,int);
int area(int,int,int);
float peri(float);
float peri(float,float);
float peri(float,float,float);
int main()
{
        int side, length, breadth;
        cout<<"\n Enter Side of a Square : ";
        cin>>side;
        cout<<"\n Enter Length and Breadth of Rectangle : ";
        cin>>length>>breadth;
        cout<<"\n Enter a,b,c all three side of Triangle (one by one) : ";
        cin>>side;
        cout<<"\n Area of Square : "<<area(side);
        cout<<"\n Area of Rectangle : "<<area(length,breadth);
        cout<<"\n Area of Triangle : "<<area(side);
        cout<<"\n Perimeter of Square : "<<peri(side);
        cout<<"\n Perimeter of Rectangle : "<<peri(length,breadth);
        cout<<"\n Perimeter of Triangle : "<<peri(side);
}
int area(int s)
{
        return(s*s);
}
int area(int l,int b)
{
        return(l*b);
}
int area(int a,int b,int c)
{
       return((a+b+c)/2);
}
float peri(float s)
{
        return(4*s);
}
float peri(float l,float b)
{
        return(2*(l+b));
}
float peri(float a,float b,float c)
{
       return(a+b+c);
}
