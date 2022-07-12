#include <iostream>

using namespace std;

int main()
{
    int num,factorial=1;
    cout<<"please enter the number which you want its factorial\n";
    cin>>num;
    while(num>0)
    {
        factorial= factorial*num;
        num--;

    }
    cout<<"the factorial of the number="<<factorial;


    return 0;
}
