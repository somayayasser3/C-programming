#include <iostream>

using namespace std;
int fun(int x,int y){
int temp;
temp=x;
x=y;
y=temp;
cout<<x<<"  "<<y;
return y;
}
int main()
{
    int num1,num2;
    cout<<"enter the first number\n";
    cin>>num1;
    cout<<"enter the second number\n";
    cin>>num2;
    fun(num1,num2);

    return 0;
}
