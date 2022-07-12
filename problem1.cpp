#include <iostream>

using namespace std;

int main()
{
    string answer;
    cout<<"would you like to close the calculator\n";
    cin>>answer;
    while(answer=="no")
    {
        int num1,num2;
        string operation;
        cout<<"please enter the first number\n";
        cin>>num1;
        cout<<"please enter the second number\n";
        cin>>num2;
        cout<<"please enter the operation either /,*,+,-\n";
        cin>>operation;
        if(num2==0&&operation=="/")
            cout<<"error division by zero"<<endl;
        else
        {
            if (operation=="+")
                cout<<"addition result="<<num1+num2<<endl;
            else if (operation=="-")
                cout<<"substraction result="<<num1-num2<<endl;
                else if (operation=="*")
                    cout<<"multiplication result="<<num1*num2<<endl;
                else
                    cout<<"division result="<<num1/num2<<endl;
        }
        cout<<"would you like to close the calculator\n";
        cin>>answer;




    }
    return 0;
}
