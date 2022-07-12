#include <iostream>

using namespace std;

int main()
{
    string var;
    cout<<"please enter the string\n";
    cin>>var;
    int i,m,flag=0;
    int f=var.size();
    for(i=0,m=f-1;i<f;i++,m--)
    {
        if (var[i]!=var[m])
        {
            flag=0;
            break;
        }
        else
            flag=1;
    }
    if (flag)
        cout<<"string is palindrome";
    else
        cout<<"string is not palindrome";

    return 0;
}
