#include <iostream>

using namespace std;

int main()
{
    int money;
    cout<<"please enter the amount of the money in Egyptian pounds\n";
    cin>>money;
    int H=money/100;      //H is the number of 100
    money=money-(H*100);
    int F=money/50;        //F is the number of 50
    money=money-(F*50);
    int T=money/10;          //T is the number of 10
    money=money-(T*10);
    int P=money;             //P is the number of 1
    cout<<H<<"*"<<"100"<<endl;
    cout<<F<<"*"<<"50"<<endl;
    cout<<T<<"*"<<"10"<<endl;
    cout<<P<<"*"<<"1"<<endl;



    return 0;
}
