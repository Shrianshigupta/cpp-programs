#include<iostream>
using namespace std;
int main()
{
	int n;
	bool flag=0;
	cout<<"enter a no. to check prime"<<endl;
	cin>>n;
	
	for(int i=2;i<n;i++)
	{
		if(i%n==0)
		{
			cout<<n<<" is non prime";
			flag=1;
			break;
		}
		if(flag==0)
		{
			cout<<n<<" is prime";
			break;
		}
	}
	return 0;	
}
