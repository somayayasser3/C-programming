#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"please enter the number\n";
    cin>>num;
    while(num>0)
    {
        int digit=num%10;
        num=num/10;
        cout<<digit;
    }

    return 0;
}
