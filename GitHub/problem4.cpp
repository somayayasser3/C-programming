#include <iostream>

using namespace std;

int main()
{
    char answer;
    cout<<"if you want to exit press\'E\'"<<endl;
    cin>>answer;
    while(answer!='E')
    {
        int a,b,i,power=1;
        cout<<"please enter the number a\n";
        cin>>a;
        cout<<"please enter the number b\n";
        cin>>b;
        for(i=0;i<b;i++)
        {
            power*=a;
        }
        cout<<"the power ="<<power<<endl;
        cout<<"if you want to exit press\'E\'"<<endl;
        cin>>answer;

    }

    return 0;
}
