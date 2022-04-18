#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"u'll have to print until..."<<endl;
	cin>>n;
	for(int num=0;num<=n;num++)
	{
		if(num%3==0)
		{
			continue;
		}
		cout<<num<<endl;
	}
}
