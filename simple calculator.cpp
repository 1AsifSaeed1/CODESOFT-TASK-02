#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,prod,div,min;
	int c;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter\n1 for Addition.\n2 for Subtraction\n3 for Multiplication\n4 fpr Division";
	cin>>c;
	if(c==1)
	{
		sum=a+b;
		cout<<"Sum of two number is:"<<sum<<endl;
	}
	else if(c==2)
	{
		min=a-b;
		cout<<"Subtraction of two number is:"<<min<<endl;
	}
	else if(c==3)
	{
		prod=a*b;
		cout<<"Product of two number is:"<<prod<<endl;
	}
	else if(c==4)
	{
		div=a/b;
		cout<<"division of two number is:"<<div<<endl;
	}
	else
	{
		cin.clear();
		cin.ignore();
		cout<<"In3valid attempt!"<<endl;
	}
	
}