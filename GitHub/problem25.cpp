#include <iostream>

using namespace std;
int fun(int num){
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			    cout<<j<<" ";
		}
		cout<<endl;
	}

}

int main()
{
	int num;
	cout<<"please enter the number\n";
	cin>>num;
	fun(num);

    return 0;
}
