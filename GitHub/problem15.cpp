#include <iostream>

using namespace std;
    float electriciy(int e){
    float total;
    if(e>1000)
    {
        total=e*1.35;
    }
        else if (e>=1&&e<=50)
        {
            total=e*0.13;
        }

        else if (e>50&&e<=100)
        {
            total=(50*0.13)+((e-50)*0.22);
        }

        else if(e>100&&e<=200)
        {
            total=(50*0.13)+((100-50)*0.22)+((e-100)*0.27);
        }

        else if (e>200&&e<=350)
        {
            total=(50*0.13)+((100-50)*0.22)+((200-100)*0.27)+((e-200)*0.55);
        }

        else if (e>350&&e<=650)
        {
            total=(50*0.13)+((100-50)*0.22)+((200-100)*0.27)+((350-200)*0.55)+((e-350)*0.75);
        }
        else if(e>650&&e<=1000)
        {
            total=(50*0.13)+((100-50)*0.22)+((200-100)*0.27)+((350-200)*0.55)+((650-350)*0.75)+((e-650)*1.25);
        }
   return total;
}
int main()
{
    int e;
    cout<<"please enter your electricity consumption\n";
    cin>>e;
   cout<< electriciy( e);
   cout<<" L.E";
return 0;
}
