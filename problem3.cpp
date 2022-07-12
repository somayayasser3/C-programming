#include <iostream>

using namespace std;

int main()
{
    int num,i,m;
    cout<<"please enter the number of levels\n";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(m=0;m<i;m++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
