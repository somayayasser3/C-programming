#include <iostream>

using namespace std;
int fun(int arr[],int size){
int sum=0;
for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];

    }
    return sum;
    

}
int main()
{
    int  size;
    cout<<"please enter the size of array\n";
    cin>>size;
    int x[size];
    cout<<"please enter your array\n";
    for(int i=0;i<size;i++)
    {
	    cin>>x[i];
	}
   int total=fun(x,size);
   cout<<"the sum of all elements in the array is  "<<total<<endl;
    float aver=total/size;
    cout<<"the average of these elements is   "<<aver;
    

    return 0;
}
