#include<iostream>
using namespace std;
void sum(int a,int b)
{
int c=a+b;
cout<<"\n the sum is "<<c;
}
void sum(float b,float a)
{
cout<<"\n"<<b+a;
}
int main()
{
int b=5,a=10;float z=10.4,y=20.2;
sum(b,a);
sum(z,y);
return 0;
}
