#include <iostream>

using namespace std;

int main()
{
     string currency;
    int required_action,amount;
    float buying_price,selling_price;
    cout<<" please enter the currency\n";
    cin>>currency;
    cout<<"please enter the selling_price\n";
    cin>>selling_price;
    cout<<"please enter the buying_price\n";
    cin>>buying_price;
    cout<<"please enter the amount\n";
    cin>>amount;
    cout<<"would you like to buy or to sell (0 for buy )(1 for sell)\n";
    cin>>required_action;
    if(required_action==0)
        cout<<"the buying price for this amount of this currency is \t"<<buying_price*amount;
    else
        cout<<"the selling price for this amount of this currency is \t"<<selling_price*amount;


    return 0;
}
