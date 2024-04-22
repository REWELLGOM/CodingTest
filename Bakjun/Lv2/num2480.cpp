/*
    max함수와 if문 분기를 잘 써야하는 문제다
*/
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3;
    if(n1 == n2 && n2== n3 && n1 == n3)
    {
        cout<<10000+(n1*1000);
    }
    else if (n1 == n2|| n1 == n3||n2 == n3)
    {
        if(n1 == n2 || n1 == n3)
        {
            cout<<1000+(n1*100);
        }
        else
        {
            cout<<1000+(n2*100);
        }
    }
    else
    {
        n4 = max(n1,max(n2,n3));
        cout<<n4*100;
    }
    
}