#include <iostream>
using namespace std;

int main(void)
{
    int yr;
    cin>>yr;
    
    if(yr % 4 == 0)
    {
        if(yr % 100 != 0 || yr % 400 == 0)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
        
    }
    else
    {
        cout<<0;
    }
}