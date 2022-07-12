#include <iostream>

using namespace std;

int main()
{
    string character;
    cout<<"please enter the letter\n";
    cin>>character;
    if(character=="a"||character=="A"||character=="e"||character=="E"||character=="o"||character=="O"||character=="u"||character=="U"||character=="i"||character=="I")
        cout<<character<<" is vowel";
    else
        cout<<character<<" is not vowel";

    return 0;
}
