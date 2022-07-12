#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"please enter the number\n";
    cin>>num;
    int sum=1;
    int old_sum=0;
    for(int i=0;i<num;i++)
    {
        sum=sum+old_sum;
        old_sum=sum-old_sum;
        cout<<old_sum<<" ";

    }
    cout<<endl;
    cout<<"the sum of numbers from 1 to number="<<old_sum;

    return 0;
}
