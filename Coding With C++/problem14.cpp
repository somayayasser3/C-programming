#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"please enter the num1\n";
    cin>>num1;
    cout<<"please enter the num2\n";
    cin>>num2;
    int max=(num1>num2)?num1:num2;
    cout<<"the maximum number is\t"<<max;

    return 0;
}
