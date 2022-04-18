#include<iostream>
using namespace std;
int main()
{
	int n,rev,div;
	cout<<"enter a no. to reverse"<<endl;
	cin>>n;
	
	while(n>0)
	{
		div=n%10;
	    rev=rev*10+div;
	    n=n/10;
	}
	cout<<rev<<endl;
	return 0;

}
