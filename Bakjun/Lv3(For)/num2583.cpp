#include <iostream>
using namespace std;

int main()
{
    int i = 0,sum= 0,sort= 0,price= 0,num= 0,Asum = 0,Asort = 0;
    cin>>sum;
    cin>>sort;
    for(i = 0; i<sort; i++)
    {
        cin>>price>>num;
        Asum += price*num;
    }
    if(Asum == sum && i == sort)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}