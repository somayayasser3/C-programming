#include <iostream>

using namespace std;
int search(int arr[],int size,int element){
for (int i=0;i<size;i++)
    {
       if (element==arr[i])
            {
			    return i;
			    break;
			}

    }return -1;

}
int main()
{
    int size;
    cout<<"please enter the size of the array\n";
    cin>>size;
    int element;
    cout<<"please enter the element you want to know if it is found or \n";
    cin>>element;
    int arr[size];
    cout<<"please enter the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=search(arr,size,element);
    if(result==-1)
        cout<<element<<"is not found\n";
    else
        cout<<"the index of "<<element<<" is "<<result;
    return 0;
}
