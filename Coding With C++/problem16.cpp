#include <iostream>
#include <cmath>
using namespace std;
float sine(float x,int n){
    double value=0;
    for(int i=0;i<n;i++)
    {
        int fact=1;
        int m=2*i+1;
        int f=m;
        for(f;f>0;f--)
        {
            fact*=f;

        }
            value=value+pow(-1,i)*pow(x,m)/fact;

    }
    return value;
}

int main()
{
    float num1;
    int num2;
    cout<<"please enter the angle\n";
    cin>>num1;
    cout<<"please enter the number you want to stop at\n";
    cin>>num2;
   cout<<"the sin of "<<num1<<"= "<< sine(num1,num2);

    return 0;
}
