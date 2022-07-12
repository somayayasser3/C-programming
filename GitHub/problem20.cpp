#include <iostream>
using namespace std;
int maxAndmin(int arr[],int size){
    int maxi=arr[0];
    int mini=arr[0];
for(int i=0;i<size;i++)
    {
        if (arr[i]>maxi)
            maxi=arr[i];
    }cout<<"the maximum number in the array is "<<maxi<<endl;
for(int m=0;m<size;m++)
{
    if(arr[m]<mini)
        mini=arr[m];
}cout<<"the minimum number in the array is "<<mini<<endl;
}
int main()
{
    int size;
    cout<<"please enter the size of the array\n";
    cin>>size;
    int arr[size];
    cout<<"please enter the array\n";
    for(int z=0;z<size;z++)
    {
        cin>>arr[z];
    }
    maxAndmin(arr,size);
    return 0;
}
