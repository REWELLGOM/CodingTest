#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin>>T;
    for(int i = 1; i < T+1; i++)
    {
        int a =0,b=0;
        cin>>a>>b;
        cout<<"Case #"<<i<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
}