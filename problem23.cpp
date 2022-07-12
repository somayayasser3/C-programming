#include <iostream>
using namespace std;


int sum(int arr1[5],int arr2[5]){
for(int i=0;i<5;i++)
    {
        int arr3[i];
        arr3[i]=arr1[i]+arr2[i];
        cout<<arr3[i];
        cout<<" ";
    }
}
int main()
{
    int arr1[5],arr2[5];
    cout<<"please enter the first array\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"please enter the second array\n";
    for(int m=0;m<5;m++)
    {
        cin>>arr2[m];
    }
    sum( arr1, arr2);


}
