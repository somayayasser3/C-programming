#include <iostream>

using namespace std;
void square(int num){
for(int i=1;i<=num;i++)
{
    for(int j=1;j<=num;j++)
    {
        if (i==1||i==num||j==1||j==num)
            cout<<"*";
        else
            cout<<" ";

    }
    cout<<endl;
}
return ;
}

int main()
{
    int num;
    cout<<"please enter the number\n";
    cin>>num;
    square(num);

    return 0;
}
