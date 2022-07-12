#include <iostream>

using namespace std;

int main()
{
    int num;
    bool flag=false;
    cout<<"please enter the number\n";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            flag=true;
    }
    if(flag==false&&num>1)
        cout<<num<<"is prime";
    else
        cout<<num<<"is not prime";

    return 0;
}
