#include <iostream>

using namespace std;

int main()
{
    int i,m;
    bool flag;
    for(i=2;i<100;i++)
    {
        flag=true;
        for(m=2;m<i;m++)
        {
            if(i%m==0)
                {
                    flag=false;
                    break;
                }


        }
         if(flag==true)
            cout<<i<<endl;
    }

    return 0;
}
