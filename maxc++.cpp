#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"enter three numbers to compare"<<endl;
	cin>>a>>b>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"First one is greatest"<<endl;
		}
		else
		{
			cout<<"third one is greatest"<<endl;
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			cout<<"second one is greatest"<<endl;
		}
		else
		{
			cout<<"third one is greatest"<<endl;
		}
	}
}
