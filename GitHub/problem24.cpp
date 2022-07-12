#include <iostream>

using namespace std;
int inverse(int arr[5]){
for (int i=0,m=4-i;i<5&&m>=0;i++,m--)
    {
        cout<<arr[m];
        cout<<" ";
    }
}

int main()
{
    int arr[5];
    cout<<"please enter your array\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    inverse(arr);

    return 0;
}
