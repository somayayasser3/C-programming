#include <iostream>
using namespace std;
int tri(int x)
{
	cout<<"please enter your end number:\n";
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return x;
}
int main()
{
	int n;
	tri(n);
	return 0;
}
