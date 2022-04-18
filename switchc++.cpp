#include<iostream>
using namespace std;

int main()
{
	char button;
	cout<<"choose a,b,c,d"<<endl;
	cin>>button;
	
	switch(button)
	{
		case 'a':
			cout<<"hello"<<endl;
			break;
		case 'b':
			cout<<"hii"<<endl;
			break;
		case 'c':
			cout<<"how are u doing"<<endl;
			break;
		case 'd':
			cout<<"nice to meet u"<<endl;
		    break;
		defaut:
			cout<<"i am learning more"<<endl;
			break;
			
			
	}
	return 0;
}
